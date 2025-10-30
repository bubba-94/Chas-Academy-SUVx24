# Rehearsal for DevOps Course Exam Day 1

## Task 1 – Cloud Computing and Redundancy

**Purpose:** Review the fundamentals of cloud technology and how redundancy ensures system reliability.  

1. Explain the difference between **IaaS**, **PaaS**, and **SaaS**.

    * **IaaS** (Infrastructure as a Service): Provides the hardware needed for the infrastructure. **Examples:** AWS EC2, Google Compute Engine
    * **PaaS** (Platform as a Service): Provides a working platform for the end user. **Examples:** Heroku, Google App Engine, AWS Elastic Beanstalk
    * **SaaS** (Software as a Service): Provides a software application for the end user. **Examples:** Google Workspace, Salesforce, Dropbox

1. Describe what **redundancy** means in networks and systems.

    A system should and can be redundant and that would mean in simple turns that a system has "backups" for hardware or software components to prevent a system from shutting down if one component or several started faulting during runtime.

1. State **two advantages** of cloud-based solutions compared to on-premises servers.  

    * Hosting servers locally takes up **alot** of power, utilities and space. By using cloud based solutions this would remove the need for these three cost demanding traits.
    * Security of an infrastructure is usually included and does not depend on the buyer but the actual suppliers of the solution.

## Task 2 – Microservice Architecture and Scaling

**Purpose:** Understand the principles behind microservices and how they scale.  

1. Describe the key characteristics of **microservice architecture**.

    A microservice architecture isolates parts of a system so it is independent and doesnt have to rely on other parts of a system.  
    This provides the ability integrate changes or updates to single parts of a system while not affecting the whole system.  
    This architecture has the need for more expertise around different areas but reduces downtime.

2. Explain the difference between **vertical scaling** and **horizontal scaling**.

    * **Vertical scaling:** refers to the ability of adjusting the actual performance of a system (eg. CPU/RAM)
    * **Horizontal scaling:** refers to the ability of adjusting the traffic capacity of a system (eg. servers)

3. Give an example of a **best practice** in microservice development.

    * Independancy
    * Scalability
    * Easily deployed

## Task 3 – CI/CD and Automation

**Purpose:** Review DevOps concepts, lifecycle, and the pipeline.  

1. Explain the difference between **Continuous Integration (CI)** and **Continuous Delivery/Deployment (CD)**.

    * **CI:** Part of the automated process that integrates updates into a pipeline that can be monitored throughtout
    * **CD:** Part of the automated process that handles the deployment of an app after tests and checks are cleared in the pipeline.

2. Name **three stages** in a CI/CD pipeline.  

    * **Development:** Create changes and integrate them into the system.
    * **Testing:** Automate tests that ensure the updates are solid and working in the system.
    * **Monitoring:** Monitor the performance of updates via logs and other programs.

3. Describe why **automation** is important in DevOps.

    **Automation** removes unnessecary time consuming tasks for writing new tests every time updates are due.  
    Setting up a pipeline can be a long and consuming task but in the end it will remove human error / mistakes and eventually save costs.

## Task 4 – GitHub Actions and YAML

**Purpose:** Understand how **YAML** is used to automate workflows in DevOps.  

1. Describe the **purpose of YAML** in DevOps.  

    A **YAML** file is a set of instructions that can be run at a determined time to either run tests, upload changes, run authenticity checks or lint files. Possibilities are endless and **YAML** provides the possibility of automating a process.

2. Explain what a **trigger** does in a GitHub Actions workflow.  

    A **trigger** is exactly what it is in modern tounge, when something happens in a system (updates, tests, whatever) something will **trigger** and pre-defined instructions will run.

3. Create an example of a **workflow** that runs `npm install` on each push.  

    ```yaml
    # GitHub Workflow name
    name: Example workflow (npm intall)

    on: 
    push:
        # Run only on push to main
        branches: main

    # Define the job/instructions
    jobs: 
    setup:
        # Set up a testing environment
        runs-on: ubuntu-latest
        steps:
        - uses: actions/checkout@v4
        - uses: actions/setup-node@v3
            with: 
            node-version: "20"

            # name: GitHub workflow step name
        - name: Install npm

            # The command run when this steps is due
            run: npm install
    ```

## Task 5 – Containers and Docker CLI

**Purpose:** Review the container concept and key Docker commands.  

1. Explain the difference between a **Docker image** and a **container**.

    * An **image** is kind of like a blueprint to a container. This explains how it is **GOING** to be built.
    * A **container** is the complete product(a house when it is finished) and the runnable environment that you can use for developing.

2. Name **three important Docker commands** and explain their functions.

    * `docker pull <image_name>` locates available image on DockerHub and downloads it.
    * `docker run` creates a new instance of an image (creation of container).
    * `docker exec` exec is used for navigating and running instructions inside of a container.

3. Explain what happens when a **container stops** running.

    Depending on how the container is setup(if it only runs a single command or not) if you do not run `docker stop <container_name>`, the container might run in the background. Runnig several containers at concurrently might affect the performance of CPU/RAM.

## Task 6 – Dockerfiles and the Build Process

**Purpose:** Review how **Dockerfiles** are used to create Docker images.  

1. Explain what the **FROM**, **COPY**, and **CMD** directives do.

    * **FROM:** `python:3.9-slim` | The image available on DockerHub
    * **COPY:** `COPY package*.json ./` will copy the file `package*.json` to the root directory `./` of the container.
    * **CMD:** The command or condition that the Dockerfile runs

2. Describe how to **build** and **run** an image.

    * **DockerHub:** Docker supported image hub where images can be downloaded from.
    * **build:** `docker build <image_name>` works locally and creates/builds an image.
    * **run:** `docker run <image_name>` locates the <image_name> on DockerHub (if not found locally), downloads it locally, and stars a container with certain image.

3. Give an example of a **simple Dockerfile** for a Node.js application.

```Dockerfile
    # Use official Node.js image
    FROM node:18-alpine
    # Create a workdir
    WORKDIR /app
    # Copy package*.json into ./
    COPY package*.json ./
    # Install app dependencies
    RUN npm install
    # Copy source code locally into the container
    COPY . .
    # If a network port is needed EXPOSE it to the container
    EXPOSE 3000
    # Define a command to run
    CMD ["node", "app.js"]
```

## Task 7 – Docker Compose and Orchestration

**Purpose:** Review **multi-container management**.  

1. Explain what **Docker Compose** is used for.

    A **Docker Compose** is (simply put) used to create a connection between several images that are found locally or on DockerHub

2. Describe the concepts of **services**, **ports**, and **depend**

* **services:** under services you can find configuration for different images that are run/built
* **ports:** binds a port locally and the port that is predefined in an image (usually match the one that the images is using)
* **depend:** creates a dependency that is needed before a certain "service" can be executed
