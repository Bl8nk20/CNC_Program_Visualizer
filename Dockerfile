# syntax=docker/dockerfile:1

FROM ubuntu:22.04

RUN yes | apt-get update
RUN yes | apt-get install build-essential
WORKDIR /.
COPY . .
# CMD ["gcc", "build/"]
EXPOSE 3000