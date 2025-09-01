FROM ubuntu:20.04
RUN apt-get update && \
    apt-get install -y gcc-arm-none-eabi cmake python3-pip openocd \
                       python3-serial python3-pytest robotframework
RUN pip3 install pytest serial robotframework-poweranalyzer
WORKDIR /workspace
ENTRYPOINT ["/bin/bash"]

