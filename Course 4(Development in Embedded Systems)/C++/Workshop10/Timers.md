# Timers  
   What are some contexts and definitions these studies revolve around?  
   * Can you give me some examples of different timers you have stumpled upon:   
           IC Timer: 555  
           Microcontroller Timers: FspTimer, ATmega328P  
   * What is a timer?  
     A timer is a mechanism that counts clock pulses and triggers actions when specific conditions are met.       
     When a timer has reached a certain preset value it will instruct a scheduler to maybe execute a certain event or interrupt.  
     * What inputs can control a timer?    
         Code, states, events, tasks, interrupts.  

   * What is a hardware timer?  
        A hardware timer is the physical component used for clocking signals and send instructions to the OS
        * Some components uses the expression timer and counter. How do they compare?  
            The source of what triggers the count.
   * What is a software timer?   
        A software timer utilizes the hardware timer to keep track of time and is used for scheduling.

## Derived conepts

   * What are the differences (if any) between
        * System timer: tracks system uptime typicallt used by the OS for scheduling  
        * Benchmark timer: Used in profiling or measuring performance.  
        * Event timer: a comination of hard and software timing measurements that provide external control for measuring time intervals.
   * How is a timer used for scheduling?  
        Whenever a timer has met its intended value it wall call the scheduler to execute a certain task.

## Implementations
   The 555 timer Can use customized duty cycles  
   * What is a 555 timer IC (integrated circuit)?  
     A precision timer that can send a periodec wave or a duty cycle.  
     IC: a developed elertronical component that executes a certain task and is a completed constructions of various resistors, transistors and capacitors.  
     555 timer: is an IC that is used in a variety of timer, delay, pulse, generation and oscillator applications.  
     It is today one of the most popular IC due to its price and flexibility.  
        
      * How does it work? 
         The 555 timer has different modes (astable, monostable and bistable) and they all outputs differently.   
         It uses 3 resistors that to the divide the voltage input in three and then compares the value to the input voltage and then sets
         the output accordingly.  

#### FspTimer

   * What entails the library "FspTimer.h"?  
        Is a library for different FspTimer components implemented in one library:  
        Provides a unified API that interacts with different hardware timer on Renesas microcontrollers.

        * What kind of components depends on this library?  
            GPT(General PWM Timer) for interval timing  
            AGY(Asynchronous General Purpose Timer) for periodic timing  
            CMT(Compare Match Timer) used for delays and periodic events  
            OSTM(Os Timer) used for time tracking or system ticks  

        * On what platforms is this components compatible/available?  
            Microcontroller that uses Renesas RA, RX and RZ.

   * What is FspTimer and where does it come from?  
        Framework developed by Renesas Electronics
        * What does FSP stand for?  
            Flexiple Software Package 
        * What hardware does the FSP interact with?  
            FspTimer interacts with the different timer components on a controller. 
   * Where is the library packaged?  
        In the ArduinoCore-reference on GitHub.

        * Can we find the source code in any way in the Arduino IDE?  
            Not directly. The Arduino IDE doesn’t expose the full source unless you browse the package contents or go to the GitHub repo ArduinoCore-renesas.
        * What processorfamilys is supported?  
            Microcontroller that uses Renesas RA, RX and RZ

   * What hardware access does the library abstract?
     Timer hardware preipherals
     * Point out which chapters in the user manual [Renesas RA4M1 Group User's Manual](https://cdn.sparkfun.com/assets/b/1/d/3/6/RA4M1_Datasheet.pdf)
       that the hardware access has been abstracted and received a limited amount of interface in the FspTimer.  
       GPT, AGT, RTC, POEG and CGC.

   * What does [Arduino UNO R4 WiFi User Manual #Timers](https://docs.arduino.cc/tutorials/uno-r4-wifi/cheat-sheet/#timers) have to say about:
     * FspTimer-class: it provides a link to the ArduinoCore-reference on GitHub where you can look up the source code for actual class.   
     * FspTimer::force_use_of_pwm_reserved_timer(): that the function will request a PWM timer.    
     * The hardware run on UNO R4 WiFi (RA4M1-processor) that is abstracted: that you have to declare the timers type, which is either AGT or GPT  
   * Use sources and source code to describe following FspTimer methods:
     * get_available_timer(timer_type): will return an int8_t that entails which available PWM timer is available.  
     * begin(mode, timer_type, timer_index, rate, duty_cycle, irq_callback): initializes the timer and what type of timer is being used, either GPT or AGT.    
     * setup_overflow_irq(): setup an interrupt request when the counter overflows.   
     * enable_overflow_irq(): enable the interrupt that fires on counter overflow.  
     * open():  initializes and prepares the timer hardware.  
     * start(): begins the timer counting.
   * What timer modes are available?
     Timer modes commonly supported include GPT and AGT. RTC is used for real-time tracking, while POEG and CGC are peripheral interfaces, not standalone timers
      * Which two are considered the most common ones?
        GPT and AGT





# Sinus waves
### Pulse with modulation
### Duty cycles
