# Real-time operating systems (RTOS)
* What does it mean if a scheduler is preemptive or non-preemptive?    
   **Preemptive:** the scheduler can interrupt a running task to switch to a higher-priority one automatically.  
   **Non-preemptive:** Tasks must yield control back to the scheduler voluntarily, the RTOS will not interrupt running tasks on its own.  

    * What does cooperative mean in this subject?    
      **Cooperative:** is when tasks must explicitly give up control (by calling a yield() function).   It is a form of non-preemptive scheduling.  

    * What is (atleast one) part of the software inside a RTOS that we have to reconsider if a sheduler is non-preemptive?  
      Critical section handling.   Designing task cooperation and timing becomes more important.  

### FreeRTOS
* What does FreeRTOS produce for the software inside our embedded systems?    
   It provides a real-time kernel that enables multitasking with features like task management, semaphores, queues, timers, and more, all aimed at deterministic behavior.  

* Is the FreeRTOS schedluer preemptive or non-preemptive?   
   * Yes? No? It’s complicated?   
      Either, can be configured to be non-preemptive.

* What is a task and a co-routine?   
   **Co-routine:** A lightweight, stackless function for systems with limited RAM.  
   **Task:** A full thread of execution with its own stack. It's the main unit of execution in FreeRTOS.

   * What separates them?  
      Memory use: tasks use separate stacks; co-routines share stack space.  
      Power: Tasks are more powerful and flexible.  
      Limitations: Co-routines can only run in cooperative mode.

   * What does priority mean for a task or a co-routine?  
      Priority determines which task is set to be run first.   
      Higher-priority tasks will preempt lower-priority ones in preemptive mode.  
      In cooperative mode, priority only matters when the scheduler gets control back.

* Is there a difference on the Arduino delay() and FreeRTOS vTaskDelay()?  
   delay() blocks the CPU entirely (busy-waits).    
   vTaskDelay() puts the task to sleep, allowing other tasks to run which is considered much more efficient and multitasking-friendly.

* How can we configure FreeRTOS for our embedded systems?     
   Via FreeRTOSConfig.h, a configuration header file.  
   A library where you can enable/disable features like mutexes, co-routines, software timers, etc.
