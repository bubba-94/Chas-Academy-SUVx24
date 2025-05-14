## Windows commands
Explain following:   
***Hostname:*** is the "name" of my computer.

***netstat***
* What happens if you type netstat in the terminal:   
    After a couple of seconds it shows different information about ceratin connections.  
        * What is shown ?    
        Information about currently active connections and its structure/model.  

Examine the following and explain in simpler terms : 
* ***ipconfig***  
    The current network cards installed in my computer.
    * What extensions can you use?  
        IPv4 and IPv6.

* ***ping***  
    When ***ping*** is typed, it displays different command to use with ***ping***.
    * Can you ping another address?  
       Yes, for example type ping www.chasacademy.se. When i ping that address the terminal outputs the amount of time (in ms) it takes for a response to reach back.  
    
* ***pathping***  
    A different menu with other options to choose from.
    * What is the difference from ping?  
        It outputs the "path" that the request is sent and what ip addresses it is using, and eventually creates statistics for each "jump".

* ***nslookup***  
    Returns a certain IP-addres of a DNS.
    * Give an example of this command:   
        nslookup www.chasacademy.se
        
* ***tracert***  
    Traces the route from my own IP to a certain DNS.
    * What can this command help us with?   
        It can help us trace where and how the global addressing works on a very shallow level.

* ***getmac***  
    Displays the MAC-addresses that is installed on my computer.
    * What is a MAC-address?  
        A unique identifier of a certain network card.

* ***arp***   
    Displays and modifies the IP -> physical addres translation tables used by ARP (address resolution protocol).
    * How is this command used?    
        Used with different options to configure diffrent connections.

*  ***systeminfo***  
    Outputs the alot of info about the current computer you are in.
    * What info can you extract when you use this command?  
        What OS i am using, processors and so on.
