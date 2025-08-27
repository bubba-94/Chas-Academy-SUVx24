# Microservice Architecture

## Learning Target

* Basic understanding of microservice architecture
* Advantages and challenges
* Describe best practices
* Scalingstrategies
* Architecture blueprint and different servicecategories

### Questions

1. Describe what a microservicearchitecture is.
  A microservice is a smaller, more independet part of an application that can be updated, managed and executed independently
  Microservices compared to monolithic architecture implies more independency and microservices divide an application to isolate parts of a system for easier configuration.

2. What are the core advantages of microservice architecture?

#### Independency

  Microservices isolate each part of a system making them less demanding of eachother and provides easier updating and configuration (if needed)

#### Scalability

  Independet parts of a system also provides easier scaling of a microservice if the demand increases

#### Deployment

  Microservices allows for easier deployment when updates are neccessary for a smaller part of a system, instead of shutting down a bigger application because updates are needed.

3. What are the three biggest challenges of microservice architecture?

#### Cost efficiency

  The cost for this type of architecture is higher because it requires more resources.

#### Complexity

  The larger a microservice scales upward, the harder it will be to integrate with other services and easily understand the structure.

#### Data consistency

  Larger services means more complex bridges of communication.

4. Describe three best practices while structuring a microservice

#### Single Responsibility Practice (SRP)

  Implies that **ONE** microservice should serve **ONE** specific funtionality or purpose.

#### Separate data storage

  Each microservice should communicate with its own database to ensure independency.

#### Asynchronous communication

  Asynchronous communication ensure decoupling of different microservices so that the communication does not cause delays while waiting for responses.

5. What does scaling entail and what are the two types of scaling called?

#### Horizontal scaling

  Is the process of scaling the performance of an infrastructure up or down meaning that the CPU/RAM is upgraded to meet the needs of an application.

#### Veritcal scaling

  Is the process of scaling up the infrastructure in size (traffic) to allow more users for any given application

6. Give an example of how micro services can be scaled horizontally in practice.

  If the performance demands increases then actual hardware / software has to be upgraded and the requires more performance (for example adding CPU/RAM)
