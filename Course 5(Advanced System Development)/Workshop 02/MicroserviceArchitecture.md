# Microservice Architecture

## Scaling

* What does scaling mean in the context of microservices?

  Scaling refers to the ability of how a microservice grows in size.  

* What is the difference between vertical scaling and horizontal scaling?

  Horizontal scaling: scaling out or in by adding/removing multiple servers or instances.
  Vertical scaling: scaling up or down by adding more CPU/RAM to the same server.

* How do microservices enable independent scaling compared to monolithic systems?

  Microservice are considered microservices and should be independent from other microservices in a big appiclation. This will enable the scaling of an independent microservice.

* What challenges can occur when scaling microservices (e.g., network overhead, data consistency)?

  Cost, a lot of skilled professionals are needed to make sure that scaling works well with other parts of the application.

* What role do technologies like containers, Kubernetes, and load balancers play in scaling?

  Differenet technologies are used for optimizing the data and traffic usage so that the application executes and updates seamlessly.

## Architecture & Blueprint

* What defines a microservice architecture compared to a monolithic application?

  A monolithic application is a big application where the services or smaller parts are coupled together.
  A microservice architecture divides that application into smaller, independent pieces for easier handling of scaling and other features.

* What are the core principles of designing microservices (e.g., independence, single responsibility)?

  Independency, scalable, easy deployment.

* How is data management handled when each service owns its own database?

  CQRS divides the data into two parts, commands and queries.
  Commands are used to change data like creating or updating records.
  Queries are used for fetching data.

## Categories of Service

### SaaS

* What is SaaS, and how does it relate to microservices?

  **SaaS** (Software as a Service) is a software ususally centrally hosted and licensed on a subscription basis. SaaS is often accesible via the browser and is a common architectural pattern in HRM (Human Resource Management), ERP (Enterprise Resource Managament) and CRM (Customer Relationship Management).

* How do microservices help SaaS products scale and update more easily?

  By dividing the SaaS into microservices it will provide the ability to update certain services without affecting runtime.

### PaaS

* What is PaaS, and how is it used in microservice deployments?

  **PaaS** (Platform as a Service) is a platform ready tool in which the end user can easily configure and customize the according to business needs.

### IaaS

* What is IaaS, and how does it provide the foundation for microservice architecture?

  **IaaS** (Infrastructure as a Service) provides the neccessary virtualization hardware that is required by the application during runtime.

* How do IaaS providers (AWS, Azure, GCP) help with scalability, networking, and storage for microservices?

  With a pay as you go demand, the availability will always be there. You just have to use and pay for it whenever it is used.
