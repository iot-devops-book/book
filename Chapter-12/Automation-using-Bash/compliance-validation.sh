# Script for validating compliance during the CI process
#!/bin/bash

# Step 1: Check for compliance flags
compliance_check=$(grep "compliance=true" config.json)
if [[ -z "$compliance_check" ]]; then
    echo "Error: Compliance validation failed"
    exit 1
fi

# Step 2: Run compliance test suite
echo "Running compliance tests..."
python3 compliance_tests.py

# Step 3: Generate compliance report
python3 generate_compliance_report.py

echo "Compliance checks completed successfully"
