# Microservices and REST API's

## Learning Target

* Develop and document microservices with REST and Swagger and compare different communicationpatterns (REST,RPC)
* Understand central components in microservicearchitecture (including API gateways, service registry, containerization and message brokers) 
* Practice the distribution of microservices with containers and pipelines, and reflect over scalability and fault tolerance.

## Develop, test and separate microservices

### REST and Documentation with Swagger

#### What does "stateless" mean when you are talking about REST

Stateless refers to the design where the server does not store any information about the clients previous interactions. Each request is treated independently.

### REST vs RPC vs others 

#### What is a pro of REST compared to RPC? 

REST can pass any data format and multiple formats, like JSON and XML, within the same API
RPC data is selected by the server and fixed during implementation, client has no flexibility.

## Distribution with containers and pipelines

### Microservice Architecture

#### What is a central diffreence between monolithic systems and microservices?

The independence. A monolithic system is a big cluster that communicates on many levels, while microservices are smaller more independant and isolated applications that are bundled together and can be updated without affecting the bigger picture.

#### Properties of Microservices

* **API Gateway:**
* **Load Balancer:**
* **Database per Microservice:**
* **Fault Tolerance:**
* **Containerization:**
* **Message Brokers:**

#### What is the key assignment of a Service Registry?

#### Why are containers so common in microservice architecture?

#### What is a message broker-system good for?

### Scalability 

#### Whats the difference between horzontal scaling and vertical scaling?

* **Horizontal scaling:**
* **Vertical scaling:**







