# Cloud Architecture

## Learning Target

* What cloud computing is and what types exist (IaaS, PaaS, SaaS).
* What advantages cloud services have compared to local infrastructure.
* What redundancy and network redundancy mean and why they are important.
* How to scale systems - both vertically, horizontally, and automatically in the cloud.
* The most important principles of cloud security and examples of security measures.
* How to use commands like ipconfig, ping, nslookup, and tracert to troubleshoot and analyze networks.

### Questions

1. What is cloud computing and which are the three main types of cloud services?
  
Cloud computing is the delivery of a selection of computing services over the internet, like storage, network, software and more. Cloud computing eliminates the need of physical infrastructure and allows flexibility and scalability.

#### SaaS (Software as a Service)

  Is a cloud computing model provided and is ready to use over the internet. The provider hosts the software, security, updates and infrastructure.
  Pros:

    * No need to install or maintain software locally.
    * Accessible anywhere with an internet connection.
    * Scales easily with your usage (e.g., more users or storage).
    * Costs are predictable with subscription models.

#### PaaS (Platform as a Service)

  Is a cloud computing model that provides a complete platform to develop, run and manage applications. Gives the possibility to adjust or configure or end users need.

  Pros:

    * Developers save time by not managing infrastructure.
    * Built-in scalability, databases, and integration with other services.
    * Faster development cycles with preconfigured environments.
    * Automatic updates, security, and monitoring handled by the provider.

#### IaaS (Infrastructure as a Service)

  Is a cloud computing model that provides the full virtualization needed for an organisation. This would include network, storage, servers instead of buying and setting up the actual physical hardware yourself.
  
  Pros:

    * Pay only for what you use (scalable up or down).
    * No need to invest in expensive physical servers.
    * Flexible: you control the software stack and configurations.
    * Good for running custom applications or migrating on-premise workloads to the cloud.

2. Name atleast three advantages with using cloud computing instead of local infrastructure.

#### Costs

Using cloud computing reduces removes the cost for updating and purchasing the physical components need for hardware.

#### Flexibility

Different CSPs (Cloud Service Providers) has the ability to provide seamless scaling of your infrastructure. Meaning that it is easy for the CSP to provide the performance upgrades since they are usually always available at larger CSPs.

#### Security

Big CSPs have invest a heavy amount of time and money into the security infrastructue and usually provides better and more robust security measure than smaller independent businesses can afford.

3. What is the meaning of redundancy and why is it important?

Redundancy is the practice for preventing downtime in the form of hardware or software components that intervenes when a part of a system is faulting.

The traffic that is used everyday, every second around the world is too big to even imagine. Every business relies on the network for financial, health or any kind of service you can imagine. So if a larger part of a system is down becuase of the lack of redundancy, a lot of traffic/people will be affected on a daily basis.

4. What is network redundancy and give an example of how it can be implemented.

Network redundancy implies that the network probably has multiple servers running at the same time while routing the incoming traffic to different servers geographically. This will decrease the bearing on one server and even the load on several servers. So that they can run concurrently. Load balancing is cruicial to allow lower latency and seamless traffice usage.

5. Explain the difference between verital scaling and horizontal scaling

#### Vertical scaling

Is the process of scaling up the infrastructure in size (traffic) to allow more users for any given application

#### Horizontal scaling

Is the process of scaling the performance of an infrastructure up or down meaning that the CPU/RAM is upgraded to meet the needs of an application.

6. How does Microsoft Azure auto-scaling of resources work?

Microsoft Azure auto-scaling is monitoring the apps performance and adds or removes instances based on the load of the application. Both horizontal and vertical scaling.

7. What are the three core principles of cloud security?

  * Encryption: ensure data protection in motion and at rest
  * Multi-factor authentication: user authentication for better security
  * Network security: well defined firewalls and segmentation of traffic flow
