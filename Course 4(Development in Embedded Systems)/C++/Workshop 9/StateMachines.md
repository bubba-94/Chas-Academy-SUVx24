# State Machines

* What is a State Machine(state machine or finite-state machine)?
    A **state machine** is an abstract "type of structure" (in simpler terms) to design a system that has a finite number or state.  
    * **State:** is the current condition or mode of the system, such as locked or unlocked.
    * **Transition:** a rule or connection that defines how the system moves from one state to another.
    * **Event/Input:** is an external trigger that cause the state machine to transistion from one state to another.
    * **Initial state:** determines where the system starts.
    * **Final state:** is a state where the system might end.

    * What is a transition?
        **Rules** of how the system will reach/move from one state to another.

    * What other keyword popup when you talk about state machines?
        * **Deterministic finite state machine:** means that from one state to another, there is only one possible transistion to enter when you leave previous state
        * **Non deterministic finite state machine:** means that from one state, there are multiple "exit" points and possible states to transistion to.

* How are state machines (as a concept) used in design and implementation?
    FSM are most commonly used when creating interfaces for users. Different inputs will "send" the user to different locations.     

    * What problems do they solve?
        State machines simplifies design and implementation of a system and makes the system independent.
        * Are there any pros to abstract a problem with a state machine?
            Finite state machines are used for computing a system to automate and simplify an application.

    * Can you find a practical example of any part in your system that could be "formed" as a state machine?
        A login to the computer.

