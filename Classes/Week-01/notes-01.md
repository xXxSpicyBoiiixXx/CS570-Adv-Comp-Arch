#Class 1 

### 1/11/2022

# Outline 

Key issues of advanced computer architecutre

* Fundamentals of computer design
    1) Performance 
* Microprocessors
    1) ISA, Pipelining, Multi-processing 
* Cache and Memory hierarchy
* SSD and Storage system
* Parallel architecture
* Simulations 
* Of course, research topics

Follow the lectures more so. 

Memory systems are more software and I/O is more hardware. 

The memory-wall problem: the solution is hte memory hierarchy. 

Memory-bounded speedup (1990) 
Memory wall problem (1994) 

SRAM: regular file, L1 data cache, L1 inst cache, L2 
DRAM: Main Memory

An advanced solution to the memory wall problem is the deep hierarchy and concurrency. 
There is some assumptions: 

1) Memory Hierarchy: Locality 
2) Concuurence: Data Access Pattern --> Data Stream 

In parallel computing is waiting for one data process etc. etc. etc. because we are waiting for this or that. 

The Intel Optane Technology for DMSH. 10x per layer. So you need a special CPU for this special CPU

The performance variation is very large from 5-15M cycles. 

ASIC from CPU side...

New Solution: PIM chip 

* PIM (Not a general purpose solution) 
    1) Process in memory (also called processor in memory) is integration of a processor with RAM on a single chip.
    2) NDP (Near memroy Data Processing) 
    3) ISP (In-Storage Processing) 

* Computer power is weak 
    1) A full kitchen needs a refrigerator 

* Limited application 
    1) Data movement reducer 
    2) A helper/mitigator

Dataflow Implementaion: 
HEREMES 
--> Get the performance of the top level and the space of the lower level. 
--> Analyzes the I/O performance gap

Re-examine the von Neumann Architecture

- Can we make von Neumann more data centric or computer and data equal? 
- YES! Focus on data and data access delay 
- How? Advance currernt memory-wall solutions

### Introduction 

Question? What is Architecture? 

The design on how to use the technolgoy and how to connect them together. A little bit more than the original Von Neumann machine. 

Different perspectives on what the Machine is.

- Instruction Set Architecture 
    * ISA
    * Major division between hardware and software. 

So what is computer archtecture? 
    - Coordination of many levels of abstraction 
    - Under a rapidly changing set of forces 
    - Desing, measure, and evaluation 

Virtual Machine:
    - add virtualizing software to a host platform  and support Guest process or system on a virtual machine (VM) 

Going over SW/HW interface and micro-architecutre. 

Why study computer architecture? 

- Enable better systems: amke computers faster, cheaper, smaller, more reliable, etc. 

- Enable new application

- Enable better solutions to problems

-- 

Industy is shifting novel architecutre. 

Many difficult problems motivating and caused by the shift 
- huge hunger for data and new data intensive applications 
- Power/energy/thermal constraints 
- Complexity of design 
- Difficulties in technology scaling 
- Memory bottleneck
- Reliablity problems 
- Programmability problems 
- Security and privacy issues 

-- No clean, definitive answers to these problems. 



