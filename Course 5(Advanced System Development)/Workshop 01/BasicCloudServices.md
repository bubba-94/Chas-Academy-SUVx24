# Basic Cloud Services

## Explanations

* IaaS: Infrastructure as a Service
* PaaS: Platform as a Service
* SaaS: Software as a Service
* CSP: Cloud Service Provider
* CI/CD: Continuous Integration / Continuous Deployment
* IaC: Infrastructure as Code
* PPV: Pay per view
* DDoS: Direct denial of service

## Cloud Computing

* What is cloud computing in simple terms?
    Cloud computing provides as the service of using applications as utilities over the internet.  
    It allows us to create, configure and customize the applications online.

* Can you give examples of popular cloud service providers?
    Amazon, Microsoft and Google are 3 of the biggest.

* What’s the difference between IaaS, PaaS, and SaaS?
    The difference between the three are how "much" is delivered to the end user.

  * **IaaS** (Infrastructure as a Service): Provides the hardware needed for the infrastructure. **Examples:** AWS EC2, Google Compute Engine
  * **PaaS** (Platform as a Service): Provides a working platform for the end user. **Examples:** Heroku, Google App Engine, AWS Elastic Beanstalk
  * **SaaS** (Software as a Service): Provides a software application for the end user. **Examples:** Google Workspace, Salesforce, Dropbox

* Why might a company choose the cloud instead of on-premise infrastructure?
    The cost of an on-premise infrastructure are very high and the infrastructure requires alot of space and power to run (which is also demanding).

* What are some common use cases for cloud computing in DevOps?

  * CI/CD pipelines for automated integration
  * Containerization & orchestration
  * IaC
  * Automated testing environments

### Cloud Computing Models

#### Public Cloud Model

    A public cloud model is easily accessible by the general public and are offered by giants such as Amazon, Google and Microsoft.

#### Private Cloud Model

    A private cloud model are less accessible and mainly used inside a closed organisation.  
    This provides more security but less scalability and cost efficiency.

#### Hybrid Cloud Model

    A hybrid cloud model is a mix between the public and private model.   
    Where critical activities are isolated in the private part of the cloud and non critical in the public part of the cloud.

#### Community Cloud Model

    A community cloud allows applications and services to be shared by many organisations.

## Redundancy

* What does “redundancy” mean in IT systems?

    **Redundancy** means that backups are used in a system so that if a vital application or component fails, the system will keep running.

* Why is redundancy important in cloud infrastructure?

    To decrease the risk of downtime.

* Can you explain the difference between high availability and fault tolerance?

  * Fault tolerance: usually means zero downtime because backup systems run in parallel.
  * High availability: minimizes downtime but may involve a short failover period.

* What could happen if a system has no redundancy?

  * A system without redundancy can result in a network / server having to much disruptions or downtime and will eventually result poor reliability and customer satisfaction

## Scalability

* What is scalability in the context of cloud services?

    Is the measure of how easily the cloud can increase and decrease in services and size.
    Better scalability means an easier process of adjustments.

* What’s the difference between vertical scaling and horizontal scaling?

    Vertical scaling: scaling up or down by adding more CPU/RAM to the same server.

    Horizontal scaling: scaling out or in by adding/removing multiple servers or instances.

* How does elasticity relate to scalability in the cloud?

    Elasticity: ability to handle unpredictable demand (automatic and dynamic).
    Scalability: ability to handle growth (planned).

* Why is scalability important for modern applications?

    Because of the availability today provides an easy access to the internet and different applications.

* Can you give an example of a scenario where a system needs to scale quickly?

  * A new game that has just been released and reviews of the game can develop an increase of users in a rapid pace.
  * Big live PPV event
  * E-Commerce on Black Friday

## Security

* Why is security a major concern in cloud computing?

    Security is a major concern in any IT aspect but in cloud computing there could be a lot of inexperienced and unauthorized users affecting the security of a cloud.

* What’s the difference between shared responsibility and traditional IT security?

  Shared responsibility means:
  * Cloud provider secures the infrastructure
  * Customer secures data, access and applications

* What are some common security risks in the cloud?

    DDoS Attacks, insider risks, data availability

* Can you name a few cloud security best practices?

  * Encryption
  * Multi-factor authentication
  * Network segmentation

* Why are identity and access management (IAM) policies important in DevOps pipelines?

    To ensure that the right people have access to the right amount of data, prevention of data leaks and keeping track of digital identities.
