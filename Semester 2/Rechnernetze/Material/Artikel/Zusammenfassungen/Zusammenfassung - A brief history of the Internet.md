- This is intended to be a brief, necessarily cursory and incomplete history

# Origins of the Internet

- 1962: The first recorded description: social interactions could be enabled through networking (J.C.R. Licklider, MIT) discussing his “Galactic Network” concept
- 1961 and 1964: Leonard Kleinrock (MIT) published first paper on packet-switching theory
- 1965: Thomas Merrill, Lawrence G. Roberts ([[ARPA|DARPA]]) connected TX-2 computer in Mass to the Q-32 in California with a low speed dial-up telephone line
- In late 1966 Roberts went to DARPA to develop the computer network concept and quickly put together his plan for the “[[ARPANET]]”, publishing it in 1967
- Due to Kleinrock, Network Measurement Center at UCLA was selected to be the first node on the [[ARPANET]]
- Doug Engelbart’s project on “Augmentation of Human Intellect” at Stanford Research Institute (SRI) provided a second node. 
- which included NLS, an early hypertext system
- 1969: four host computers were connected together into the initial [[ARPANET]]
- 1970: the Network Working Group (NWG) working under S. Crocker finished the initial [[ARPANET]] Host-to-Host protocol, called the Network Control Protocol (NCP). 
- 1972: Kahn organized a large, very successful demonstration of the ARPANET at the International Computer Communication Conference (ICCC)
- 1972 Email was invented

# The Initial Internetting Concepts

- The original ARPANET grew into the Internet. Internet was based on the idea that there would be multiple independent networks of rather arbitrary design, beginning with the ARPANET as the pioneering packet switching network, but soon to include packet satellite networks, ground-based packet radio networks and other networks. 
- The idea of open-architecture networking was first introduced by Kahn shortly after having arrived at DARPA in 1972.
- NCP was badly scalable with more and more IMPs, since NCP had no abillity to address Networks and machines
- Thus, Kahn decided to develop a new version of the protocol which could meet the needs of an open-architecture network environment. This protocol would eventually be called the Transmission Control Protocol/Internet Protocol (TCP/IP)
- Four ground rules were critical to Kahn’s early thinking: 
	- Each distinct network would have to stand on its own and no internal changes could be required to any such network to connect it to the Internet. 
	- Communications would be on a best effort basis. If a packet didn’t make it to the final destination, it would shortly be retransmitted from the source. 
	- Black boxes would be used to connect the networks; these would later be called gateways and routers. There would be no information retained by the gateways about the individual flows of packets passing through them, thereby keeping them simple and avoiding complicated adaptation and recovery from various failure modes. 
	- There would be no global control at the operations level.

- Other key issues that needed to be addressed were:
	- Algorithms to prevent lost packets from permanently disabling communications and enabling them to be successfully retransmitted from the source.
	- Providing for host-to-host “pipelining” so that multiple packets could be enroute from source to destination at the discretion of the participating hosts, if the intermediate networks allowed it. 
	- Gateway functions to allow it to forward packets appropriately. This included interpreting IP headers for routing, handling interfaces, breaking packets into smaller pieces if necessary, etc. 
	- The need for end-end checksums, reassembly of packets from fragments and detection of duplicates, if any. 
	- The need for global addressing. 
	- Techniques for host-to-host flow control.
	- Interfacing with the various operating systems