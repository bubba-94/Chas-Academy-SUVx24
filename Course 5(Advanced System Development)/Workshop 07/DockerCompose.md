# Docker Compose

## Learning Target

* Understand the purpose of Docker Compose and how a `docker-compose.yaml` is built (services, image/build, ports, volumes, environment depends)
* Orchestrate several service locally in a way that reflects production
* Integrate Docker/Compose in CI/CD: building, tersting, tagging, pushing to registry and automatic deployment

### Docker Compose and orchestrating multiple services

#### What is Docker Compose and what is it used for?

Docker Compose is lightly speaking a file that connects multiple container images and is used for applications that demand multiple running services for execution.

#### Explain the purpose of Docker Compose and describe  the structure / synxtax in a simple `docker-compose.yml`

Docker Compose is used for connecting different images and creating a multi-container application.
The syntax looks the same as a regular `.yaml` workflow file but in the end has its own rules that are applied.
_____

### Integrate Docker with CI/CD-pipelines

#### Provide a short description of the flow, how steps connect from the Compose-configuration to CI/CD-integration

Update the CI/CD pipeline config to include the docker build and run steps so that when a push / pull request is met. The pipeline will automatically build a new image, and the others steps that are needed to build and run a new updated versioned container.
_____

### CI/CD with Docker | List two advantages with docker as a building environment and a potential trade-off

* **Advantages:**
  * Fast, easy and reliable testing and deploying of services.
  * Shareable among different workstations and environments
* **Trade-offs:**
  * Docker images require good knowledge of security.

_____
