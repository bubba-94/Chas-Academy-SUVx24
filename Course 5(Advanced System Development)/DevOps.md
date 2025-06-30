# DevOps

## What is DevOps? Principles and Culture

  DevOps is the term and process of shortening the life cycle of a development project, with the use of tools and technologies to automate continuous deployments.
  By creating an efficient workflow between the development team (Dev) and the IT operations team (Ops) and providing.
  
----

## CI/CD Concepts and Tools

### Tools

These are 8 of the tools provided in the source that make the process possible. Here is the source that i have used [spacelift.io](https://spacelift.io/blog/ci-cd-tools).

| **Tools** | **Spacelift** | **Azure DevOps** | **GitHub Actions** | **Jenkins** | **Buddy** | **TeamCity** | **CircleCI** | **AWS CodePipeline** | **TravisCI** | **GitLab CI/CD** |
|-----------|---------------|------------------|--------------------|-------------|-----------|--------------|--------------|----------------------|--------------|------------------|
| **Ease of use** | Moderate (UI + policy-focused) | Moderate (feature-rich but complex) | High (GitHub native, simple YAML) | Low (manual setup, plugins needed) | High (visual pipelines) | Moderate | High | Moderate (AWS integrated) | Moderate | High (auto DevOps support) |
| **Built-in features** | Policy as code, Terraform integration | Boards, repos, test plans | Secrets, actions marketplace | Minimal; relies on plugins | Docker, SSH, caching | Test intelligence, build grid | Orbs, caching, Docker support | Deep AWS integration | Basic CI/CD tools | Full DevOps suite (CI/CD, monitoring, registry) |
| **Version Control** | Integrates with GitHub, GitLab, Bitbucket | Azure Repos + GitHub/Git | GitHub only | Any Git system | Git-based | Git-based | Git-based | AWS CodeCommit & GitHub | Git-based | GitLab built-in |
| **Hosting** | Cloud & self-hosted | Cloud & self-hosted | Cloud (GitHub hosted runners) | Mostly self-hosted | Cloud | Cloud & on-prem | Cloud | Cloud | Cloud | Cloud & self-hosted |
| **Infrastructure Focus** | Strong (IaC-focused) | Some support (with pipelines) | Light (via third-party actions) | None by default | Light | Light | Light | Medium (AWS services) | Minimal | Medium (with runners, scripts) |
| **Extensibility** | High (policies, stacks, custom workflows) | High (extensions, tasks) | High (actions marketplace) | Very High (plugins, scripting) | Medium | High | High | Low (more AWS focused) | Medium | High (custom scripts, runners) |
| **Scalability** | High (enterprise-ready) | High (Azure-backed) | High (cloud-scale GitHub infra) | High (manual config needed) | Medium | High | High | High (scales with AWS) | Medium | High |
| **Pricing** | Paid (free tier available) | Free for small teams, paid plans | Free for public repos, generous free tier | Free, open-source, infra costs apply | Paid (free tier) | Paid | Free tier + usage-based | Pay-as-you-go (AWS usage) | Free for OSS, paid for private | Free tier, paid features |

### Concepts

Explaination of the words that will sort of create the "infinity sign" that is used to reference the DevOps cycle.

* **Continuous Development**: is when updates in code are made in more continuous and smaller pieces instead of running large updates, that will provide easier testing and deployment.
* **Continuous Integration**: is a practice for automated tests and builds for code changes to.
* **Continuous Testing**: is the process of running automated te4sts throughout the entire software development lifecycle.
* **Continuous Deployment**: is the approach where code changes are automatically deployed to a production environment after passing automated tests.
* **Continuous Feedback**: is a method of providing ongoing performance evaluations.
* **Continuous Monitoring**: is a strategy involving ongoing and automated surveillace and analysis of an organizations IT infrastructure.
* **Continuous Operations**: a business approach focused on minimizing downtime and disruptions to maintain seamless service delivery.

#### Questions

* What’s the difference between CI and CD?
  * **CI**: automatically tests and integrate code changes.
  * **CD**: automatically deliver/deploy code to production.

* Can you draw or describe a simple CI/CD pipeline?
  * Explained under [concepts](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%205(Advanced%20System%20Development)/DevOps.md#concepts) above.

* What tools have you heard of for automation?
  * GitHub Actions, Jenkins and GitLab CI are some.

----

## Version/Source Control

Process and tools provided to keep track of changes that have been made in a repo aswell as alot other features.

### Key Concepts

```cpp
git clone: // retrieve an entire repository from a hosted location via URL
git commit: // stages local changes to be ready for git push 
git push: // pushes local branch commits to the remote repository branch
git pull: // fetches and merges any commits from the tracking remote branch
branching: // creates a new wokring branch of a certain source code tree so that changes do not interact with the main tree directly
merging and resolving conflicts: // when conflicts arise in a pull requests, the pull request blocks the action until conflicts are solved. 
pull requests: // is an action that integrates new code into old code.
```

#### Questions

* How do you resolve a merge conflict?
  * By reviewing code and removing code that creates a conflict in a certain file.

* What is a pull request?
  * Is a request made by a team / developer for signaling other teams to provide commentary and code review of mergeable code.

* Difference between `git pull` and `git fetch`?
  * pull: fetch and merge any commits from the tracking remote branch
  * fetch: fetch down all the branches from that Git remote

----

## Infrastructure as Code (IaC)

Is a method to define and handle a projects infrastructure (eg. servers, network and databases) as code to create an automated and standardized handling of infrastructure. 
This provides faster deployment and enhanced error handling.

### Docker

Docker is a tool that provides the ability to package applications into containers to create a
fast, lightweight and consistent package that can be used across different environments.

### Terraform (IaC)

Is an IaC tool that provides the ability to build, change and verision infrastructure safely and efficiently.

#### Questions 

* Whats the difference between a container and a virtual machine ?
  * **Container**: isolate the applications and their dependencies while sharing the host OS.
  * **Virtual Machine**: provides a complete emulation of a physical machine, including the OS.

* Have you seen or used Docker before?
  * Once in a previous project as it was used for testing / debugging but it was created by another team.

* Why is IaC useful?
  * It is used to efficiently version infrastructure and automate the process with the use of the DevOps flow.

----

## Monitoring, logging and obeservability

### Purpose

To ensure a healthy, optimized and functional system.

### Tools

* **Prometheus + Gragana** for monitoring metrics.
* **ELK Stack** for logs.
* **Datadog, New Relic**

#### Questions

* How do you know if a deployment went wrong?
  * When a deployment has failed or when post deployment checks reveal issues.

* What metrics would you monitor in a web app?
  * Response time, error rates, throughput, uptime, and user satisfaction.

----

## Cloud Basics

### Big 3

* **AWS** (Amazon Web Services)
* **Azure** (Microsoft)
* **Google Cloud Platform**

#### Questions

* What's the difference between IaaS, PaaS and SaaS?
  * **IaaS (Infrastructure as a Service)**: is a cloud based service that gives the customer access to virtual computer resources (eg. servers and network).
  * **PaaS (Platform as a Service)**: is cloud based service that provides a complete environment to develop, run and handle applications (eg. OS, IaaS, Frameworks, GUI, CLI and more).
  * **SaaS (Software as a Service)**: is a cloud based service that provides a complete software run on the internet as a prenumeration service. eg (CRM, Visma, Spotify)

* What cloud services have heard about or used?
  * I have heard about the big three, but never used any of them.

----

## Mock Questions

1. What is DevOps and why is it important?

    DevOps is the connection between Development(Dev) and IT Operations (Ops) to shorten the lifecycle of a software project and
to continuously track and test a system under development.

2. Describe a basic CI/CD pipeline.

    [Link that describes the flow](https://github.com/bubba-94/Chas-Academy-SUVx24/edit/main/Course%205(Advanced%20System%20Development)/DevOps.md#concepts) that provides an infinity sign when put together.

3. What are containers and how do the differ from VM's?

    A container is a more lightweight, isolated package that provides all the dependencies to run a certain application.
    A Virtual Machine is a full on copy of you computer installed inside your computer.

4. What happens when you push code to GitHub with CI enabled?

    When a pull request occurs, tests will be run to make sure that the provided code passes the CI tests.

5. What are some challenges DevOps solves?

    The time consuming code reviews and communication between Dev and Ops to automate integration and deployment of new code.

6. What do you know about IaC?

    That IaC is a way of breaking down infrastructure into code to more easily handle said services.
