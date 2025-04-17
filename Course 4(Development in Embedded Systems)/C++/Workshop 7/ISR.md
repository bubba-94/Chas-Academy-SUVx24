# Interrupt Service Routine (ISR)
An ISR is a set of code / function that will occur when told to.  
An ISR should be as efficient and short as possible so the CPU can continue it's main task.

* ## What does an interrupt mean for hardware ?
    An interrupt is an event that occurs when you want the CPU to handle a specific set of instructions 
    outside of its main task.

* ### What is an ISR ?
    An ISR is the set of instructions that will be executed as the CPU "jumps" outside of its main task and 
    executes the ISR. (One rule of thumb is to have the ISR as short as possible to ensure CPU efficiency)

* ### When does an ISR occur?
    As cited above, an ISR is a quicker and more efficient way of "handling" a different task rather than polling and 
    waiting in a busy state. [This]() is a visual summary of what happens.

    * ### Under what situations can an ISR be activated?
        * Software interrupts: Triggered by the program using specific instructions (e.g., system calls). 
        * Hardware interrupts: Triggered by external or internal hardware events (e.g., timers, I/O pins)

* ### What is a debounce?
    Debouncing is a technique used to filter out the rapid, unintended toggling (bouncing) of a signal, especially from mechanical switches, when they are pressed or released.