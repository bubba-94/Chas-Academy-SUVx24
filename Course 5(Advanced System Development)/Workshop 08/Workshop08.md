# Docker and CI/CD

## Learning target 

* Undertand the basics of CI/CD and how Docker is used in automated pipelines.
* Have the ability to build, containerise and start a NodeJS-API locally with Docker Compose.
* Create a GitHub Actions workflow that automizes builds and pushes a Docker image.
* Connect GitHub and DockerHub with secure secrets to enable CI/CD

## Introduction 

CI/CD with Docker provides the possibility to build, test and deliver applications in a fast and reliable proces. By using Docker we create a consistent running environment that works both locally and in a cloud. GitHub Actions is used to automize build and publish stages to Docker Hub. Under this workshop we will, step by step go through forking a Node JS API, run it inside a container to creating a working pipeline that automatically delivers new versions.