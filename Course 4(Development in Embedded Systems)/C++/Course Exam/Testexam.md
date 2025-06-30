# Embedded Systems

Mocked test from chatgpt to summarize our last course in year 1 before oursummer break.

**Test Type:** Mixed (Theoretical + Practical)  
**Total Questions:** 16 
**Coverage:** RTOS, Protocols, Security, Testing, AI tools, Documentation, Hardware interaction, and more.  
**Test Date:** Thursday 18/6
**Good Luck!**

---

## Theoretical Questions (1–15)

### 1. Real-Time Operating Systems (RTOS)

* a) What is a Real-Time Operating System (RTOS)?  
     Is a system/application that utilizes real-time properties to execute specific time depending tasks.

* b) Why is an RTOS preferred in embedded systems over a general-purpose OS?
    Because an embedded system demands more precise and time critical executions

---

### 2. RTOS Task Management

Describe how tasks are created and managed in FreeRTOS.  
What are the roles of `vTaskDelay` and task priorities?

* `vTaskDelay` suspends the task for a set number of ticks, allowing other tasks to run.
* Task priorities determine which task runs when multiple are ready. Higher priority wins, unless it's delayed or blocked.

---

### 3. Semaphores vs Queues

What is the difference between semaphores and queues in FreeRTOS?  

* **Sempahore:** A semaphore is used for task synchronization or signaling.
* **Queues:** A queue is used to transfer data/messages between tasks.

When would you use one over the other?

You use a semaphore to signal between tasks (e.g., ISR to task), and a queue when you need to send actual data (e.g., sensor values).

---

### 4. Communication Protocols

Explain the main differences between UART, SPI, and I²C in terms of:

| Protocol | Wires                   | Speed | Master/slave config | Advantages |
|----------|-------------------------|-------|---------------------|------------|
| **SPI**  | 4 (MISO, MOSI, SCK, SS) | Quickest of the three, short distance | Yes, one master, multiple slaves | Very fast, full-duplex, simple hardware |
| **UART** | 2 (TX, RX)            | Slower than **SPI** | No formal master/slave | Simple, widely used, long-distance capable |
| **I2C**  | 2 (SDA, SCL)              | Slower than **UART** | Yes, one master, multiple slaves | Fewer pins, multi-device support, easy to expand |

---

### 5. Interrupts

Why are interrupts important in embedded systems?  
    Because some tasks have to be executed in a time critical manner.

Give an example of how an interrupt might be used in a sensor application.
    Keep them short an concise, like a flag that determines if a certain interrupt should be run or not inside a constantly checking loop.

---

### 6. State Machines

Define a finite state machine (FSM) and explain how it is useful in embedded applications.
    A state machine is a stucture that allows an application to jump between different states, for example dishwasher, laundry machines or coffee machines.

---

### 7. Power Optimization

Mention three techniques to reduce energy consumption in an embedded system.

* Software Optimizations
* Hardware Optimizations
* Power Management Techniques
* Profiling

---

### 8. Testing Strategies

Describe one strategy for validating the behavior of an embedded system.  
Include a benefit and a limitation.
    Setting up a test environment that creates mocked data based on the intended results.
    A benefit is that the environment is fairly easy to create and can sometimes be created without hardware.
    A limitation is that it is hard to depict a real-life/time environment

---

### 9. Cybersecurity Threats

What are two common threats to embedded systems and one method to prevent each?

* Threats: Unauthorized access and firmware tampering
* Prevention: Use authentication and secure boot or code signing

---

### 10. Secure Communication

What roles do HTTPS and TLS play in embedded systems communication?
    HTTPS uses TLS to encrypt communication.

---

### 11. Hashing and Data Integrity

How does SHA-256 contribute to data integrity in embedded devices?
    SHA-256 generates a hash that acts like a digital fingerprint; if data changes, the hash changes and helps to detect tampering.

---

### 12. Documentation Principles

What does “exhaustive documentation” mean in the context of embedded systems?  
List three good practices.
Is documentation that refers to complete, thorough and detailed documentation that cover every little bit of an application or hardware.

* What, Why, How
* Diagrams & Examples
* Include Dependencies & Instructions
* Error Handling and Limitations

---

### 13. Hardware/Software Integration

Explain how a temperature sensor (e.g., via I²C) communicates data to software in a microcontroller.

The microcontroller acts as the master and initiates communication and the sensor responds and sends data.

1. Starts by pulling the SDA line low while the SCL line is high to signal a start of communication.
2. The MCU sends the 7 bit address followed by a read or write bit (0/WRITE, 1/READ)
3. If the sensor is present, it responds with a ACK by pulling the SDA line low
4. The sensor sends the data (typically 1-2 bytes) followed by an ACK.
5. The sensor stops by releasing the SDA line while the SCL line is low.

---

### 14. GDPR & Anonymization

What does GDPR require from an embedded system dealing with personal data?  
Give one method of anonymization.

* GDPR requires data minimization, user consent, and anonymization.
* Anonymization: hashing or tokenization.

---

### 15. AI Tools & Responsible Use

How can AI tools responsibly assist in embedded system research or development?  
Mention one benefit and one ethical consideration.
Collect data and configure improvements based on certain data.

---

## Practical Question (16)

### 16. FreeRTOS Scheduling

Write a pseudo-code or C snippet showing two FreeRTOS tasks with different priorities.  
Explain what happens when both are ready to run.  
[Link to program Exercise1b.cpp](https://github.com/bubba-94/Chas-Academy-SUVx24/blob/main/Course%204(Development%20in%20Embedded%20Systems)/C%2B%2B/Workshop12/Exercise1b.cpp)  
The higher priority task will always run if not told otherwise with example vTaskDelay.
That will let the other task know that there is CPU time available and will eventually run until the delay is done.

---

## Focus Areas to Review

* RTOS (FreeRTOS: Tasks, Semaphores, Queues, EventGroups)
* Communication (UART, SPI, I²C)  
* Power & Performance Optimization  
* Cybersecurity (TLS, HTTPS, WPA2/3, SHA-256)  
* Testing (Debugging, Testramverk)  
* Documentation Standards  
* GDPR & Anonymization  
* Practical Coding & Troubleshooting

---
