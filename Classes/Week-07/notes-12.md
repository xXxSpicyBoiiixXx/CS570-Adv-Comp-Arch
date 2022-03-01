# Class 12

### 3/01/2022

TODO: Homework 5

### Main Memory

1) The performance Perspective
2) The Energy Perspective
3) The Reliabilty/Security Perspective
4) Trends/Challenges/Opportunites in Main Memory 

### Energy 
--> A memory access consumes ~1000X the energy of a complex addtion 

### Reliabilty 
--> When you double take you get a slow down  

### Security 
Rowhammer  --> It's like breaking into an apartmnet by repeatedly slamming a neighbot's door until the vibrations open the door you were after

### Memory System: A shared Resource View 

--> DRAM and memory controllers, unlikely to satisft all requirements. 
--> Some emerging non-volatile memory technologies enable new opportunites: Memory + storage merging

If you have data on NVM, then you're lose the data unless you keep things in consistency. 

!!! WE NEED TO RETHINK THE MAIN MEMORY SYSTEM 
--> To fix DRAM issues and enable emerging technoloiges to satisfy all requirements

1) Fix it: Make memory and controllers more intelligent 
2) Eliminate or minimize it: Replace or augment DRAM with a diffrent technology
--> Use DRAM and NVM ram  
3) Embrace it: Desing heterogeneous memory and map data intelligently across them 
^^ This is the most popoular one

There is some solution in the lecture. 

This is why we get Deep Memory hierarchy
--> That means there is no perfect solution 

When they work together you get some interface problems, 
--> It's very uncontrolled 
--> unfairness, starvation, low performance 
--> uncontrollable, unpredicatable, vulnerable system

QoS-aware memoty systems can provide perdictable performance and higher efficiency 

### So what is the C-AMAT's role in here? 
-- So a question comes to 

Goal: Satisfy performance/SLA requirements in the presence of shared main memory, heterogeneous agents, and hybrid memory/storage

### Plans of Action 
--> We need to understand 
1) Memory and DRAM
2) Memory controlers 
3) Reducing and tolerating memory latency
4) Potential memory tech that can compete with DRAM
5) Evalute new ideas in memory systems

Is even for the memory bank organization, you can reduce the data access time by half 

Interleaving: How do you map data to different banks? 

If your data stream is sequential than do round robbin but if not then how do you know? 

-- Page Mode DRAM 
--> DRAM bank is a 2D array of cells: rows by colums 
--> DRAM row is also called a DRAM page 
--> Sense amplifiesr also called row buffer 

Rank: Multiple chips operated togetehr to form a wide interface 

A 64-bit Wide DIMM (one rank) 
1) Advanrages: 
--> Acts like a high capacity DRAM chip with a wide interface
--> Flexibility: memory controller does not need to deal with individial chips 

2) Disadvantages
--> Granularity: Accesses cannot be smaller than the interface width 

DRAM Channels 
1) 2 Independent Channels: 2 Memory Controllers 
2) 2 Dependent/Lockstep Channels: 1 Memory Controller with wide interface 

### The DRAM Subsystem The top down view 

--> Transferring a cache block 
Distributing the entire physical memory sapce, for each chip. 

During the process, 8 columns are read sequentially

### Latency Controller: Basic DRAM operation 
--> CPU --> controller transfer time 
--> Controller latency
--> Controller ---> DRAM transfer time 
--> DRAM bank latency 
--> DRAM --> controller trasfer time 
--> Controller to CPU transfer time 

-----------------------------------------------------------------------------------

### Memory Interleaving 

--> Multiple Banks (interleaving) and chnnels 
1) Multiple Banks 
-- Enable concurrent DRAM accesses 
-- Bits in address determine which bank an address resides in 

2) Multiple independent channels serve the same purpose 
-- But they are even better because they have separate data buses 
-- Increased bus bandwidth 

!!! Enabling more concuurency requires reducing 
1) Bank Conflicts 
2) Channel conflicts 

How to select/randomize bank/channel indices in address? 
-- Lower order bits have more entropy 
-- Randomizing hash functions (XOR of different address bits) 

Interaction with Virtual -> Physical Mapping 
1) OS influence where an address amps to in DRAM 
2) Operating system can influence which bank/channel/rank a virtual page is mapped to 

It can perform page coloring to 
- Minimize bank conflicts
- Minimize interapplication interference
- Minimize latency in the network 

--> Comments 
Randomenss is not the best method, but the best method in prac, if we have no performance model and data access pattern 

In these no solution. no model situations 

--> AI and big data
--> Get some modeling 






