# Writing Dockerfiles 

## Common commands

```bash
FROM {image} = on what already made image your custom image will build upon
WORKDIR {path} = Source directory, where files will be copied and command executed
COPY {host_path} {image_path} = tells the builder to copy files from the host path and put them into the container image 
RUN {command} = tells the builder to run the specified command
ENV {name} {value} = sets an evironment variable that a running container will use
EXPOSE {portnumber} = sets config on the image that indicates a port the image would like to expose
USER {user/uid} = sets the default user for all subsequent instrucions
CMD ["{command}", "{arg1}"] = sets the dafault command a container using this image will run

```

## Introduction

Docker is a tool to package and run applications in isolated environments called containers. With the help of Dockerfiles you can automize how an application is build and what dependencies it needs. Docker provides the simplicity of running the smae environment on different computers without conflicts. In these exercises you will step by step exercise writing Dockerfiles, building images and running applications in containers. The goal is to understand both the foundations and how to use Docker in practical scenarios.

## Learning target 

* Understand the difference between an image and a container aswell as Dockerfile syntax (`FROM, COPY, EXPOSE, CMD`)
* Build images and run containers
* Containerise simple applications: static web(Nginx/Apache), Node.js/Express and Python
* Handle files and information: `COPY, .dockerignore, docker cp` aswell as updating running containers
* Explore and debug containers: `docker exec` (bash), catalogcommando and `docker inspect` and network-IP.
* Expand images with packages (`apt-get, tree`) and apply fair foundational principles.

### Question 1: What is a Dockerfile and why is it used

A Dockerfile is a text-based document that is used to create a container image. It provides instructions to the image builder on the commands to run, files to copy, startup command and more. 

### Question 2: What does the row `FROM ubuntu: 20.04` in a Dockerfile mean

It implies from what images the custom build will depend and extend from.

### Question 3: How do you copy a local file `app.py` into a container in a Dockerfile

`COPY . .` will copy from the home_source to the container WORKDIR
