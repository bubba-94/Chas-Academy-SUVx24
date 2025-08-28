# Introduction for CI/CD and GitHub Actions

## Learning Target

* Understanding: Have knowledge about the DevOps lifecycle and the words CI/CD, testing, delivert and deployment, also when to use delivery and delpoyment.
* Skills: Independently write simple **.yaml** files for GitHub Actions (triggers, jobs, steps)
* Quality: Implement foundational pre commit hooks for codeformat, linting and fast tests as a complement to CI.
* Automation end to end: Configure a minimal pipeline that builds, tests and analyzes the quality and securtiy, packages and delivers.
* Operation: Under stand GitOps-idea and be able to explain declarative ops and continuous syncing.

### Summary

Be able to motivate why CI/CD is central in modern teams and theoretically understand how to set up a working, traceable and secure workflow in GitHub Actions.
Complemented with local hooks and a basic understanding for GitOps.

## Subjects

### DevOps and pipelines

* What is DevOps, and how does it connect development and operations?

  DevOps refers to the workflow between the Development Team and Operations Team.  
  By automating the process of integrating new updates and automatically test, filter and deploy/deliver those updates.

* What is the difference between a pipeline and a workflow?

  A pipeline is the "physical" tube that source code funnels through when updates are getting tested, linted and so on.
  A workflow is the process of how succesfully the Continuous Integration and Continuous Deployment is followed.

* Why is automation important in DevOps pipelines?

  To decrease the amount of time and cost writing independent tests for each and every update that is continuously created.

* What are the main phases in a DevOps lifecycle?

  **Continuous**: Development, Integration, Testing, Deployment, Monitoring, Feedback and Operations.

### GitHooks and Git pre-commit

* What is a Git hook?

  Git hooks are scripts that executes before or after an event such as committing, pushing and receiving changes.
  These scripts makes the workflow adjustable for different developers and operations.

* What is the purpose of a pre-commit hook?

  A pre-commit hook is used for formatting the code to a specific standard. Such as linting, spell-checks, static analysis and code style checks.

* Give an example of a check you could run in a pre-commit hook.

  An example could be to check so that all the indent and curly bracers are placed according to the standard that has been determined.

* Why are local hooks a complement to CI/CD?

  So that the whole team inside a specific department formats and follows the same standards automatically.

### Foundational CI/CD-flow in GitHub Actions

* What does CI/CD stand for?

  Continuous Integration / Continuous Deployment

* What is the difference between Continuous Delivery and Continuous Deployment?

  The Delivery makes software ready for production with a manual decision to deploy.
  The Deployment goes one step further and automatically deploy validated changes to production without the middle hand.

* What is the purpose of automated testing in CI?

  To reduce the time it takes for developers to write single tests cases. Automated testing reduces the time and manpower to acheive the same goal.

* Why should security and quality checks be part of the pipeline?

  Because errors/malware in a program can have devastating results and these checks eliminate that threat.

#### YAML - intro

* What is YAML, and why is it used in GitHub Actions?

  A .yaml is a script file that is being executed when told by GitHub Actions.

* How are jobs and steps structured in a .yaml file?

  **Steps** run in a sequence.
  **Jobs** can be a collection of steps being run in parallell.

* What is a trigger in GitHub Actions (e.g. on: push)?

  A **trigger** is a condition that when it is met, it activates a workflow in a certain repository.

#### Continuous Development

* What is meant by "continuous development"?

  **Continuous Development** implies that updates and developing software is delivered in smaller automated batches to become more iterative and provide faster and tests and deliveries.

* How does version control (Git) support continuous development?

  Git provides the ability to branch out and commit from several different computers/users and with the correct process create seamless and fast development environment where code mostly does not collide when different branches are merged into the main development branch.

#### Continuous Integration

* What is the goal of continuous integration?

  **Continuous integration** is to set up a testing and validation environment to analyze newly commited code.

* What kinds of tests or checks are usually run in CI?

  * Linting tests (code format, spell checks etc.)
  * Unit tests (to test individual parts of code and make sure the succeed)
  * Configurable tests (tests that are scripted and run on different stages of a commit)

* Why is fast feedback important in CI?

  To discover broken tests and guards in the code. Faulting code equals faulting applications.

#### Continuous Testing

* What is continuous testing, and how does it differ from running tests manually?

  Continuous testing are run in parallel with the development instead of running tests in the end manually.

* Give an example of a tool used for automated testing.

  GitLab

* How can automated testing improve code quality?

  Automated testing can discover faulting code faster.

______

### GitHub Actions intro

* What is GitHub Actions used for?

  It is a CI/CD platform where you can automate the development process. GitHub Actions provides the possibility to automate the building, testing and deployment process.

* What is the difference between a workflow, a job, and a step?

  A **workflow** is the whole process of CI/CD and **HOW** it is executed, a workflow can be a collection of one or more **jobs**.
  A **job** is a collection of steps/scripts that can be used for configuring, building, testing.
  A **step** is an instruction that executes and determines what is to be done when a ceratin **action** is required.

* How can GitHub Actions improve team collaboration?

  It automates the process and removes the human aspect of communication in a way.

### GitOps intro

* What is GitOps?

  GitOps utilizes the second part of the workflow and includes deployment, monitoring, feedback.

* What does it mean that GitOps is declarative?

  Instead of providing a set of step-by-step instructions on how to achieve a desired state, you define what you want your system to be in configuration files stored in a Git repository.

* What advantages does GitOps bring compared to traditional ops?

Enhanced security through version control and a reduced attack surface, increased reliability via automated deployments and easy rollbacks, improved efficiency from automation and faster recovery times, and better collaboration and transparency by using Git as the single source of truth for all infrastructure changes.
