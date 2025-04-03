# syntax=docker/dockerfile:1

FROM ubuntu:22.04
LABEL Description="Build Environment"

RUN apt-get update && apt-get -y --no-install-recommends install \
    build-essential \
    cmake \
    make\
    wget

WORKDIR /.
COPY . .

RUN rm -rf build && mkdir build
RUN cd build && cmake -S .. -B .

# CMD ["gcc", "build/"]
EXPOSE 3000