# init.pp
# Puppet manifest for configuring an embedded Linux device

# Ensure required packages are installed
package { ['htop', 'python3', 'git']:
  ensure => installed,
}

# Ensure a specific directory exists
file { '/opt/device_logs':
  ensure  => directory,
  owner   => 'root',
  group   => 'root',
  mode    => '0755',
}

# Deploy a startup script for device diagnostics
file { '/usr/local/bin/diagnostics.sh':
  ensure  => file,
  mode    => '0755',
  source  => 'puppet:///modules/device/diagnostics.sh',
}

# Ensure the diagnostics script runs at boot using systemd
file { '/etc/systemd/system/diagnostics.service':
  ensure  => file,
  mode    => '0644',
  content => @("EOF")
    [Unit]
    Description=Device Diagnostics Service
    After=network.target

    [Service]
    ExecStart=/usr/local/bin/diagnostics.sh
    Type=oneshot

    [Install]
    WantedBy=multi-user.target
    | EOF,
}

# Enable and start the diagnostics service
exec { 'enable-diagnostics':
  command => '/bin/systemctl enable diagnostics.service',
  unless  => '/bin/systemctl is-enabled diagnostics.service',
  require => File['/etc/systemd/system/diagnostics.service'],
}
