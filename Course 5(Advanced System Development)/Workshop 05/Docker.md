# Docker

## Explanations

* **Dockerhub** = Docker hosted website where you can find a share images (default location where Docker CLI will seek)
* **Docker Registries** = a storage and distribution system for Docker images.
* **Docker Desktop** = Docker application with provided GUI and available for macOS and Windows.
* **Docker tags** = are used for naming different versions of images.

## Foundational Docker

### What is Docker?

Docker is a fast and lightweight application that provides the ability to develop, ship and run separately from your infrastructure.
Inside a **"container"**, everything is included that is needed for the environment that is being delivered. This makes it easy to share on accross OS and make sure that anyone can work in the same environment.

### Getting started 

### What role does "dockerd" and Docker CLI toghether in the eco system?

**dockerd** is is the acutal running application that builds, ships and distributes the Docker containers. The "dockerd" listens for the Docker API and manages the Docker images, containers, network and volumes. 
**Docker CLI** is the client that uses the Docker API to communicate with Docker Daemon (dockerd), using commands such as **"docker run/build/pull**. The CLI can communicate with several daemons from the same CLI.
 
### Describe the difference between a Docker image and a runnable container object, and explain how it executes

Docker objets: 
  * **Image**: and is a read-only template that includes insctructions to create a running container and includes code, libraries, environment variables, config files and more.
  * **Containers**: a container is the runnable client of an image, and you can manipulate the states and status of multiple containers from the CLI. 

## Docker CLI

### What is the difference between docker run, docker start, and docker exec, and when would you use each?

`docker run` creates a new instance of an image 
`docker start` start an already created and stopped container
`docker exec` command to be used inside a container to run certain executable command 

### How can you view real-time logs from a running container using the Docker CLI, and how would you follow them continuously?

`docker logs -f {container_id}` -f or --follow will stream the logs in real-time so you can view new log entries as they are written

### What command would you use to remove all stopped containers, unused images, and networks, and what are the implications of running it?

`docker system prune` removes all stopped containers, unused networks, dangling images and build cache.  
Adding -a or --all will also remove unused images

By being unsure and using this in the wrong way could mean:
* Unwanted data loss, any stopped container is permanently deleted.
* Networks removed, all custom networks not actively being used by a container will be gone
* Image cleanup