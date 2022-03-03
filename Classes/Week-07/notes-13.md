# Class 13

### 3/03/2022

ODO: Homework 4,5

### Main Memory

Today we will be talking about controller
--> The controller does the banks and make descions 

CPU -> controller transfer time 
Controller -> DRAM transfer time 
DRAM -> controler transfer time 

### Memory Controller 

DRAM Controller: Function 
--> Ensure correct operation of DRAM (refresh and timing) 
--> Service DRAM requests while obeying timing constraints of DRAM chips 
--> Buffer and schedule requests to improve performance.

There is some constraints, resource conflicts (bank, bus, channel), minimum write-to-read delays. 

So the scheduling determins the queue

DRAM controller: where to place 
--> In chipset
    + More flexibility to plug different DRAM types into the system 
    + Less power density in the CPU chip
  
--> On CPU chip 
    + Reduced latency for main memory access 
    + Higher bandwidth between cores and controller 
        - More information can be communicated 
        
DRAM Scheudling Policies (I) 

--> First come first server 
    Oldest request first

--> First ready, first come first served 
    1) Row-hit first (core first, column first, etc.) 
    2) Odlest first (starvation)
Goal: Maximize row buffer hit rate -> maximize DRAM throughput

-- Actually, scheduling is done at the command level 
    1) Column commands (read/write) priotirized over row commands (activate/precharge) 
    2) Within each group, older commands prioirtized older younger ones

--> A scheduling policy is essentially a priortization order

--> Priortization can be based on 
1) Request age
2) Row buffer hit/miss status 
3) Request type (prefetch, read, write) 
4) Requestor type (load miss or store miss) 
5) Request criticality 
    - Oldest miss in the core? 
    - How many instructions in core are dependent on it? 

Row Buffer Managmenet Policies 

Open versus Closed Row Policies 
--> there is a table in the lecuture 

Need to obey DRAM timing constarints for correctness 
--> There are many timing constraints in DRAM
--> tWTR: minimum number of cycles to wait before issuing a read command after a wrtie command is issued 
--> tRC: minmum number of cycles between the issuing of two consectuirve activate commands to the same bank 

--> Need ot keep track of many resources to prevent conflicts 

### NVM and PIM

### NVM 
--> PCM 
--> STT-MRAM
--> Memristors/RRAM/ReRAM

PCM is resistive memory: high resistance (0) and low resistance (1) 
PCM works in the pahse changed

PCM Advantages 
1) Scales better tahn DRAM, Flase 
    - Reqquires current pulses, which scale linearly with feautre size 
    - Expected to scale to 9nm
    - Prototyped at 20nm 
2) Can be denser than DRAM 
    - Can store multiple bits per cell due ot large resisitane range 
    - Prototypes with 2 bits/cell in 08 and 4 bites/cell by 2012

Having DRAM is still faster than DRAM but PCM is cheaper and PCM is nonviolatile 

### A more viable approach: hybrid memory 


--> Issues 
1) cache vs main memory
2) ...

We need dynamic descions


DRAM as a Cache for PCM
--> Goal: achieve the best of both DRAM and PCM/NVM

