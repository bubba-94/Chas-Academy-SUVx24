# Addressing
    Network addressing questions that need an anwser!

# Exercise 1 
Get a better understanding of how addressing with IPv4 works, use the link below to anwser questions.
[Link] (https://www.youtube.com/watch?v=POPoAjWFkGg) 

**CIDR**: Classless Inter-Domain Routing: a classless network with CIDR notations "/24 /26", the notations determines how many bits are for the network and how many are for the host "32-24 = 8, 32 - 26 = 6".  
**Subnet**: divides a network into smaller portions for organizing but also access control for different devices that connects to a ceratin network.  
**Subnet mask**: determines which part of an IP is the "address"(first three octets) and which is the host(last octet).  
**NetID**: is the reserved first address (x.x.x.0) in a subnet, all host bits set to 0.  
**Broadcast-address**: is the reserved last address available (x.x.x.255) in a subnet, all host bits set to 1.  
**HostID range**: is the remaining available addresses inside a subnet that are available between excluding NetID and Broadcast address.  

# Exercise 2
Study followin informative video about network protocols, use the link below to anwser questions.  
[Link](https://www.youtube.com/watch?v=p3vaaD9pn9I)

### Important protocols

**DHCP:** (Dynamic Host Communication Protocol) is a network management protocol used for assigning IP addresse automatically 
and other parameters to devices connected to a certain network. Working in the Application layer.  
**IP:** (Internet Protocol) is the network layer communications protocol in the IP. Its task is to deliver packets from one source to another.
Working in the Network layer.
**TCP:** (Transmission Control Protocol, stateful) is a data transfer layer protocol that uses IP to tranfer data packets that is relatively reliable.
This protocol is usually not used for say video games because it has a bigger chance of causing minor delays. Working in the Transport layer.  
**UDP:** (User Datagram Protocol, stateless) is a faster but less reliable protocol than TCP. Working in the Transport layer.  
**DNS:** (Domain Name Server) relates a certain webb address to a certain IP address. Used for easier addressing. Working in the Application layer.  
**SMB:** (Server Message Block) is a communication protocol that is used for shared access to files, directories, printers and other resources on a certain network. Working in the Application layer.
**SMTP:** (Simple Mail Transfer Protocol) is the most common protocol for transferring electronic mail. Working on Application layer.   
**SSH:** (Secure Shell) is a protocol making sure that a connection to another computer over the global or local network is secure. Working in the Application layer.    
**HTTP:** (Hypertext Transfer Protocol) is the protocol tranferring websites on the WWW(World Wide Web). Working in the Application layer.  

What is net spoofing: Net spoofing is a procedure in which a person or program succesfuly identifies as another by falsifying data, to usually gain unauthorized access.  

### Other protocols

**FTP:** (File Transfer Protocol) is the protocol used for transfering files on a computer network. Working in the Application layer
**SNMP:** (Simple Network Management Protocol) is used a protocol used for monitoring and handling networks based on TCP / IP model. Working in the Application layer 
**Telnet:** is a protocol used for textbased login on different computers. Working in the Application layer.  