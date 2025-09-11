# Build upn latest ubuntu version
FROM ubuntu

# Set the working directory/repo to HelloWorld
WORKDIR /HelloWorld

# Commands to update, install and look upp a valid gcc version
RUN apt update && \  
    apt install -y build-essential && \  
    gcc --version

# Copy all files from the source directory where Dockerfile lives to the WORKDIR /HelloWorld
COPY . .

# Compile main.cpp in WORKDIR
RUN g++ main.cpp -o main

# Command that runs inside container. 
CMD ["./main"]

# docker build -t {container_id} . 