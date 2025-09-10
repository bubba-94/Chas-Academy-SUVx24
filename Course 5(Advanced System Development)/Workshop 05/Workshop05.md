# Foundational Docker

## Docker CLI Commands

[Link to cheat sheet](https://www.coursera.org/collections/docker-cheat-sheet?utm_medium=sem&utm_source=gg&utm_campaign=b2c_emea_x_multi_ftcof_career-academy_cx_dr_bau_gg_pmax_gc_s1_en_m_hyb_23-12_x&campaignid=20858198824&adgroupid=&device=c&keyword=&matchtype=&network=x&devicemodel=&creativeid=&assetgroupid=6490027433&targetid=&extensionid=&placement=&gad_source=1&gad_campaignid=20854471652&gbraid=0AAAAADdKX6ZoIpfuln28DvMRAnCe3MNbu&gclid=Cj0KCQjww4TGBhCKARIsAFLXndQemcDYaRH_lmxAVZO57XnWIR2eUgxwhJpaE8b1epAMlkIGnew4tpUaAuSPEALw_wcB)

```bash
# Exit and kill running process 
Ctrl + C 

# List all running containers
docker ps

# List all containers (running or not)
docker ps -a

# List all available images, -a or --all flag will list all images with or without tags
docker images -a 

# Create a new container, does not re-use previous containers 
docker run

# Remove a container (image will still be avaialable)
docker rm {container_id/name}

# Remove an image 
docker rmi {image}

# Start an already created environment 
docker start {container_id/name}

# Stop a running container 
docker stop {container_id/name}

# Pull an image with latest version from Docker registry
docker pull {image}

# Pull an image with tag/version from Docker registry 
docker pull {image}:{tag}

# Create an available image with tag/version, does not have to be available locally
docker run {image}:{tag}

# Create a instance detached from the Docker CLI using -d / --detach flag
# d- / --detach = Runs a container in background and provides the full ID of run container
docker run -d {image}:{tag}

# View logs from service running inside the container. (which are present at the time of exec)
docker logs {container_id/name}

# Stop one or more running containers
docker stop {container_id/name}

# Publish a containers port to the designated host port using the flag -p
# Considered a standard to use the same host_port as container_port
docker run -d -p {host_port}:{container_port} {name}:{tag}

# Change the name of default container naming by using the name flag
docker run --name {name} {image}:{tag}

```

## Introduction

Containers are a key part of modern software development. They make it possible to package and run application in lightweight environments, which improves portability and realibility. With the help of Docker we can quickly run environments, test code or run components of a system with single handed commands. In this workshop you will familiarize yourself with the foundations i Docker and learn how to handle containers with the help of the Docker CLI. You will also create and run simple containers with Docker CLI and understand their behaviour in different scenarios.

## Learning target 

* Get a basic understanding of what containers are and how they are used in development.
* Learn the foundations in Docker CLI to create, run and debug containers aswell as names, volumes, networks and interactive sessions
* Exercise both one-time runs and long lasting containers, including how the are handled after execution.

## Assignments from Workshop 5

### Question 1: Write a short definition of what a container is

A container is an isolated, configurable environment, that includes pre-installed dependencies and configurations for developing certain applications.

### Question 2: Write the commando for listing all present containers (both active and non-active)

`docker ps -a` uses the -a flag to list all present containers

### Question 3: What is the difference between a container and an image

* **Image**: and is a read-only template that includes insctructions to create a running container and includes code, libraries, environment variables, config files and more. 
* **Containers**: a container is the runnable instance of an image, and you can manipulate the states and status of multiple containers from the CLI. 

### Question 4: Commando for starting a new container from image nginxs and open port 80

* **Port binding**: Bind the container's port to the **host** port to make the service avaialable to the outside world, otherwise the container will run in an isolated Docker network. The container has to be exposed so that we can access it locally
`docker run -p 9000:80 nginx:{tag}`

### Question 5: How do you check the logs from a container with the name webserver

If we have a Docker container called "web-app" 
`docker logs web-app` is the command to list the log of that running container

### Question 6: Write the commando for stoping and removing a container with id `abc123`

```bash
# Stop the container 
docker stop abc123

# Remove the container
docker rm abc123
```

### Question 7: How do you list all Docker-networks on your computer?

`docker network ls`

### Question 8: Write a commando that starts a container with a mounted volume from ~/data to /app/data

`docker run -v ~/data:/app/data {image}`
`-v` bind mount command which points to a specific host path/folder/file
`~/data:` is the path/folder/file on the host machine that is going o be presented in the container
`data {image}` is the end path in where you can view the host folder inside the container

### Question 9: How do you get help with Docker the command `run` through Docker CLI?

`docker run --help`

### Question 10: How do you remove and image with the name `myapp`?

`docker rmi myapp`
