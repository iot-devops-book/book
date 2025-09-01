# Dockerfile for containerized testing of embedded software
FROM ubuntu:20.04

RUN apt-get update && apt-get install -y \
    gcc-arm-none-eabi \
    make \
    gdb

# Copy embedded software source code
COPY ./source /home/dev/software

# Build embedded software within the container
WORKDIR /home/dev/software
RUN make

# Run tests
CMD ["./test_suite.sh"]
