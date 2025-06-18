# Real-time systems

### Questions to think about during studying.

* What is an real-time system?
  A real time system is a system that demands a task being executed inside a specific time-frame.
* What properties in a system are considered important if you have a real-time perspective?
  Timeliness, predictability< and coordination between internal clocks in a computer to another computer.
* If our program executes all tasks sequentially, how do that program affect the real-time demands?  
  A squentiall system will not be able to run certain interrupt in a critical time constraint since it doesnt support timely switching between tasks.

### Real-time operating systems

* What is a real-time operating system(RTOS)?
  Is a system/application that utilizes real-time properties to execute specific time depending tasks.
  * What do they have to do with real-time systems?
    They utilize the properties of a real-time system and performs tasks/interrupts accordingly. 
  * On what platforms are RTOS usually found?  
    Avionics, healthcare, robotics
  * What are some differences between general-purpose OS (GPOS) and real-time OS (RTOS)?  
    A general purpose OS can be designed to perform a broader range of tasks and apps without the critical time constarints.
    An RTOS depends on more critical time stamps and interrupt handling.
  * When and why do you want to use RTOS?  
    When the time demands are more precise and critical.

### Scheduling

* What work is the schudelers main responsibility?  
  To keep track of what tasks are being run.
  * What does it track?  
      The internal clock cycle
* When does the scheduler work?
  When a task a interrupted to switch to a higher task or switching(and saving) when jumping from one task to another
* How does a scheduler help a system meet real-time demands?  
  It helps setup a track record of critical pieces of information that can be executed at a certain amount of time.  
