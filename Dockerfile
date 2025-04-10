# syntax=docker/dockerfile:1

FROM ubuntu:22.04
LABEL Description="Build Environment"

RUN apt-get update && apt-get -y --no-install-recommends install \
    git\
    python3-pip\
    build-essential \
    cmake \
    make\
    wget\
    doxygen \
    doxygen-doc \
    graphviz

RUN pip3 install conan

WORKDIR /.

COPY . .

RUN rm -rf build && mkdir build

# Detect Conan profile & install dependencies
RUN conan profile detect

RUN cd build && cmake -S .. -B .

# CMD ["gcc", "build/"]
EXPOSE 3000