FROM ubuntu:20.04

RUN apt-get update && apt-get install -y \
    build-essential \
    g++
WORKDIR /work