# Rehearsal for DevOps Course Exam – Part 2  

## Task 1 – IAM and Role-Based Access Control (Identity and Access Management)

**Purpose:** Review how authentication and authorization are handled in cloud environments.  

1. Explain what **IAM** is and why it is used.

    **IAM** is used as security measure so that the contributors dont have access to areas they should not or cannot control.

2. Describe the difference between the **principle of least privilege** and **role-based access control (RBAC)**.

    * **Principle of least privlige** entails that your role is restricted to what features you can utilize in a project setup
    * **RBAC:** Is the method that provides the priviliges your "role" has.

3. Give an example of how a **developer** and an **application** can have different access rights.

    * A **developer** can have access to building and managing code while an **application** has the permission to run and access resources.

## Task 2 – Secrets and Environment Variables

**Purpose:** Understand the difference between environment variables and secret keys, and how they are securely managed.  

1. Explain the difference between an **environment variable** and a **secret**.

    * **Environment variable:** is a variable that be used, shared and viewed through a project without certain restrictions
    * **Secret:** is a variable that links credentials to a certain variable, this variable should not be available for the common man.

2. Mention **two common security risks** when handling secrets.

    * Accidental leaks
    * Big possibility of many users "knows" the content of the actual secrets

3. Provide **two tools** used for secure secret storage.

    * GitHub Keys & Secrets
    * SSH Keys

## Task 3 – Container Instances and Azure Services

**Purpose:** Review when containers or virtual machines (VMs) are the best choice.  

1. Compare **containers** and **VMs** in terms of **startup time**, **isolation**, and **portability**.

    |**Compare**|**Containers**|**VMs(Virtual machines)**|
    |-----------|--------------|-------------------------|
    |**Startup time**| Fast, containers start in seconds | Slower, VMs require full OS boot |
    |**Isolation**| Process-level isolation (shares host OS kernel) | Full OS isolation (stronger security boundary) |
    |**Portability**| Lightweight and highly portable across systems | Less portable, tied to hypervisor/OS environment |

2. Name **two Azure services** that manage containers and describe their **use cases**.

    * **Azure Container Instances (ACI):** Fast to deploy and pay-per-second billing. | Ideal for short-lived or burst workloads, CI/CD tasks, or quick container testing without Kubernetes overhead.
    * **Azure Kubernetes Service (AKS):** Suitable for microservices, large-scale production environments, and workloads that require automated scaling and load balancing.

## Task 4 – Cloud Optimization and Cost Control

**Purpose:** Understand cloud optimization and cost-efficient operation.

1. Explain what **rightsizing** and **autoscaling** mean.

    **Rightsizing:** is making sure that resources arent unnessecary and cost inefficent, pay for what you need
    **Autoscaling:** is the ability of how a system can scale during busy or idle hours.

2. Describe how **Azure Policy** and **RBAC** assist in optimization.

    * **Azure Policy:** is an pre-defined adjustable standard that is set during a project and should be followed by users.
    * **RBAC:** Pay for what you need, RBAC makes sure that users with no use of certain resources lowers the cost per resource.

3. Suggest **two actions** for an API that is **slow and expensive** to operate.

    * **Bottlenecks:** if the load balancing of an API is not optimized, traffic jams can be caused and reduce the efficiency of an API
    * **No autoscaling:** if you are using performance that is not needed during idle hours, this will create an cost inefficiency

## Task 5 – Monitoring and Logging (Grafana & Prometheus)

**Purpose:** Understand observability tools and how to measure system health.  

1. Explain the purpose of **Grafana** and **Prometheus**.

   * **Grafana:**  
     Grafana is a visualization and dashboard tool that connects to data sources (like Prometheus, Loki, or ElasticSearch) to display metrics and logs in real time.  
     It helps teams monitor performance, detect anomalies, and analyze system health through customizable dashboards.

   * **Prometheus:**  
     Prometheus is an open-source monitoring and alerting system designed for reliability and scalability.  
     It collects time-series metrics from targets (like containers, servers, or exporters) and stores them in a time-series database that can be queried using **PromQL**.

2. Describe how **metrics** are collected via **Node Exporter**.

   **Node Exporter** is an agent that runs on a host machine to expose hardware and OS-level metrics such as CPU usage, memory, disk I/O, and network statistics.  
   Prometheus scrapes these metrics from the Node Exporter’s HTTP endpoint (usually `:9100/metrics`) at regular intervals for analysis and alerting.

3. Provide an example of a **PromQL query** that measures **CPU usage**.

   ```promql
   rate(node_cpu_seconds_total{mode="user"}[5m])

## Task 6 – Documentation and Standardization

**Purpose:** Understand how **docstrings**, **JSDoc**, and **Doxygen** are used to document code.  

1. Explain the purpose of **docstrings** in Python.

    Docstrings are multiline string literals placed inside functions, classes, or modules to describe their purpose, parameters, and return values.  
    They improve code readability and can be extracted automatically by documentation tools like Sphinx.

2. Give an example of a **JSDoc comment** in JavaScript.

```javascript
/**
    * Calculates the total price with tax.
    * @param {number} price - The base price.
    * @param {number} tax - The tax rate as a decimal.
    * @returns {number} The total price including tax.
    */
    function totalPrice(price, tax) {
        return price + price * tax;
    }
```

3. Name a **tool** that automatically generates documentation.

    * Sphinx (for Python)
    * JSDoc (for JavaScript)
    * Doxygen (for C/C++ and other languages)

## Task 7 – AI in DevOps (Copilot and Automation)

**Purpose:** Understand how **AI assistants** are used in DevOps workflows.

1. Explain how **GitHub Copilot** can be used for **code documentation**.

    GitHub Copilot can automatically generate docstrings, JSDoc comments, and function summaries based on code context.  
    It helps developers maintain consistent documentation and saves time by suggesting relevant text while typing.

2. Describe what a **conventional commit message** is and give an example.

    A conventional commit follows a standardized format that describes the type and purpose of a change.  
    It helps automate versioning and changelog generation.

3. Mention **one advantage** of AI-assisted **code review**.

    AI-assisted reviews can automatically detect potential issues (like code smells, security risks, or missing documentation),
    provide consistent feedback, and accelerate review cycles, improving both quality and developer productivity.

## Task 8 – Ethics, Trust, and AI Responsibility

**Purpose:** Reflect on ethical principles in AI development.

1. List **Microsoft’s principles** for **Responsible AI**.

### Microsoft’s Responsible AI principles include

* Fairness | AI systems should treat all people fairly.
* Reliability & Safety | AI should perform reliably and safely.
* Privacy & Security | Data must be protected and secure.
* Inclusiveness | AI should empower everyone and avoid bias.
* Transparency | AI systems should be understandable.
* Accountability | Developers and organizations are responsible for their AI systems.*

2. Explain what **observability** means in an AI context.

    Observability in AI refers to the ability to monitor, understand, and explain model behavior and performance.  
    It includes tracking model inputs, predictions, drift, and biases to ensure ethical and reliable outcomes.

3. Give **two examples of risks** associated with **unethical AI use**.

    * Bias and discrimination: AI trained on biased data may produce unfair results.
    * Privacy violations: Improper data collection or usage can expose sensitive personal information.
    * (Optional third example): Lack of accountability – unclear ownership of AI decisions can lead to harm without recourse.
