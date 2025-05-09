# Network 
### Exercise 1
[Link](https://www.youtube.com/watch?v=sMHzfigUxz4)
* How is the internet built?  
    It is built by several smaller networks that communicate in a wider scale

#### History
* When did computer networks start developing?  
    In the 1960s funded by the US Department of Defense
* When could we for the first time use the internet?   
    The foundation for the modern internet was available in the 1970s (TCP/IP)
* When did wireless network become available?    
    In the 2000s.

#### The network edge
* What is a host? 
    Is an application or device that "uses" the internet 
        * Give different examples of a considered host.  
        A desktop, laptop, mobile device or even web page or server.
* What does a Client respectively Server do?  
    A client is a personal device that is connected to the internet.
    A server is a machine that distributes different services for a client 
* Where do we often find a server?  
    Usually in large data centers.

#### Connectivity
* What main type of access networks does the video mention?  
    Home Access Networks: is the network that we all use in our own home.
    Institutional/Enterprise Access Networks: is used by organizations and corporations to gather a various amount of devices under one or more networks (via fibre optics). 
    Mobile Access Networks: enables us to connest our smartphones and laptops to a mobile network.  
* How is out local network connectede (physically) to the internet?  
    A router is typically connected with either DSL, Cable or Fibre optics to connect to the broader internet very device inside a resident is connected to the same router and shares the same IP address.  
* What is the technique called that allows our smartphones to connect to the internet?    
    Mobile Access Network (5G right now).  

#### Network Core
* How is the network core built? 
    Is built by several routers that communicate with eachother and creates the core of the network.
* What is a routers main task?
    To deliver packages to different routers.
#### Packet switching 
* How does packet switching work?
    It divides a full package into smaller chunks and is then sent via different routes to the same destination.
* What are the advantages of packageoriented communication?  
    Redundancy and flexibility.

#### Routing and forwarding 
• What is the difference between routing and forwarding?  
    Forwarding: a local action that forwards a package from one router to another.
    Routing: the global process of forwarding packages via routers.
• What is needed to make the transportaion of a package as efficient as possible?    
    A routing algorithm such as BGP (Border Gateway Protocol).

#### Protocols
• Why are protocols important?    
    So devices have the ability to communicate and understand eachother.
• Examples of protocols?  
    TCP, UDP, IP, HTTP.

#### TCP / IP
• How is the model built?    
    TCP / IP is constructed with 4 layers. Application, Transport, Network and Link layer.
• How does the stack work when receiveing a package?
    A package interacts with each layer to construct the incoming data and the new layer to the full data package.
    When a package is delivered **to** a device the TCP model works from top to bottom.
    When a package is delivered **from** a device the TCP model works from bottom to top. 
• Advantages of the stack?    
    Creates a robust system that allows the technology to use different protocols for different layers inside a network without affecting other layers.

### Exercise 2
[Link](https://www.lifewire.com/lans-wans-and-other-area-networks-817376)
* What two other types of Area Networks are described?   
    LAN, WAN
    * What other types of Area Networks are available?  
        WLAN, CAN, SAN, PAN are some.
* What is a key difference between these two categories of computer networks? 
    The size of the network and how many devices are connected to a network.
    LAN (Local Area Network): a smaller network located maybe insidea household.
    WAN (Wide Area Network): connects different LANs and creates a bigger a **wider** network.

### Exercise 3
[Link](https://www.lifewire.com/what-is-a-private-ip-address-2625970)
* How are private addreses divided?  
    **Class A:** 10.0.0.0 – 10.255.255.255 (16 million+ addresses)
    **Class B:** 172.16.0.0 – 172.31.255.255
    **Class C:** 192.168.0.0 – 192.168.255.255

* Why are private addresses needed? 
    Private addresses allow devices to communicate within a local network without using up the limited number of public IP addresses.

* What does DHCP do?  
    Automatically assigns IP addresses and other network configuration.

* What are some reserved ip addresses?    
    169.254.x.x, APIPA (Automatic Private IP Addressing, used when DHCP fails)
    127.0.0.1,Loopback address (refers to your own device)
    
* How do find your own computers IP address?  
    Windows: Open Command Prompt and type ipconfig.
    macOS/Linux: Open Terminal and type ifconfig or ip a.
* What does an ISP do?    
    An ISP (Internet Service Provider) gives you access to the internet.
