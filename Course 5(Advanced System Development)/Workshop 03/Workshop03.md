# Workshop 3 Question

## Learning target

* Describe the concept of CI/CD-pipelines
* Describe how the pipeline flow works
* Understand Git Hooks and how the can be used to automize code quality and processes

### Questions

#### Describe DevOps and explain why it is important in modern developing

  DevOps engineers sets up an environment to seamlessly communicate between the teams.
  DevOps engineers creates a so called CI/CD pipeline where developers can provide code/updates that run through automated tests/lints to make sure everything goes according to plan.  
  The operations team will later receive complete deliverable code that can be deploy to customer (when conditions are met)

#### DevOps architecture

* **CI/CD Pipeline**: is the funnel where updates, tests, lints and different check are executed to ensure safe and deployable code.
* **Infrastructure as Code (IaC)**: provides the possibility of monitoring and managing the infrastructure as code and with automation tools.
* **Automation**: is key for reducing the costs and time it takes to for example run and create tests.
* **Monitoring**: is to provide areas of improvement to the team and speed up the whole process.
* **Collaboration**: this whole process can provide a more including and simple environment where the communication is better.

#### DevOps life-cycle

* **Continuous Development**: is the process of reducing updates into smaller, faster, and more iterative code creations and updates.
* **Continuous Integration**: is a version controllable development environment where multiple developers can commit to the application from diffrent branches.
* **Continuous Testing**: are pre-made test that are automatically executed when conditions are met, for example running unit tests and linting tests.
* **Continuous Deployment**: means that when updates and tests are succesful, the new updates are ready to be deployed and merged into the application.
* **Continuous Monitoring**: is the practice of monitoring every stage in the pipeline and data is sent to analytics team where the data is also reviewed.
* **Continuous Feedback**: provides the organisation with data from each layer in the architecture to look for improvements.
* **Continuous Operations**: involve running a working process/flow without interruptions to seamlessly update applications.

#### Automation in DevOps

Automation is central in the DevOps area to reduce costs and production time. The automation process refers to tests/checks, updates/productions and more, that are executed when a certain condition is met. This is how the whole DevOps concept come together to wokr in a seamless infinite process.

#### What is CI/CD

**CI (Continuous Integration)**: is the automated structure and process of how updates are handled (with well defined checks/tests) all they way down to the production team.
**CD (Continuous Deployment/Delivery)**: is the automated structure and process of how the new software updates are delivered to the end user application and is integrated to the updated application.

#### Git Hooks and pre-commit

**Git Hooks** are a set of commands or executeable instructions that are run when a condition is met.
A **pre-commit** is type of hook that runs instructions/checks before a commit successful. The instructions in the file has to be met to make a pre-commit successful.

#### CI/CD in practice

[Summarize this link](https://www.youtube.com/watch?v=jZYrxk2WMbY)

Summary: The flow starts with a developer creating updates that later goes through multiple stages and is handled by different **tools/applications** on the way to deployment.
During this funnel or process the updates are: tested, linted, checked, packaged, and much more to meet a certain standard of an organisation. This is to prevent different formats and bugs being uploaded into the updated application.

#### Why is CI/CD important for organisations

**CI/CD** provides a seamless funnel where the process of building, integrating, testing and deploying code becomes automated and requires less human resources.
This will eventually reduce costs, manpower and deliver a better, more robust end result.
