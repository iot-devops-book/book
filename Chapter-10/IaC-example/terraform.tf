# Terraform script to set up an IoT gateway
resource "aws_eks_cluster" "iot_cluster" {
  name     = "iot-cluster"
  role_arn = "arn:aws:iam::123456789012:role/EKS-Cluster-Role"

  vpc_config {
    subnet_ids = [aws_subnet.iot_subnet.id]
  }
}

resource "aws_subnet" "iot_subnet" {
  vpc_id     = aws_vpc.iot_vpc.id
  cidr_block = "10.0.1.0/24"
}

resource "aws_security_group" "iot_sg" {
  vpc_id = aws_vpc.iot_vpc.id
  name   = "iot-security-group"
}
