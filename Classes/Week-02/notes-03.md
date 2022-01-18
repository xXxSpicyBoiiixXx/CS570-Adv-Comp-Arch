#Class 3

### 1/13/2022

TODO: Homework - Search for chips after 2010 and write about it with a research paper.

### Question: What do we do with all these extra transistors 

- We get some heat problems 

Today: 86% Memory, 3% Processors, 3% Routers, 8% random

1990: 9% Memory, 56% Processors, 33% Routers, 2% Random

### CSA (Configurable Spatial Accelerator 

- Designed for the first US Exasclae supercomputer A21 
- A grid of compute, switiching, interconnect, storage elements on a die 
- Dataflow Engines: take the dataflow graph of a program whcih is created by a compiler, and map that dataflow graph on an arrat of computer elements and interconnects 

* Basic Idea to use all these transistors 
- Only mapped elements active (dark silicon) 
- Build application specfic CSAs 
- Grab explicitly the parallelism in the explicitly 

* Discussion 
- A dataflow machine on chip 
    1) historically dataflow concept only had very limite success 
    2) That is why it isc alled Accelerator 
-Build application specific CSAs 
    1) must specific enough to be effective and geenral enought to keep cost low
- Grab explicitly the partallelism in the code for dataflow
    1) Hard to achieve in general 
- Accelrate what? 
    1) For compute-intensive application, GPU probabyl is better accelerator
- So, they are (semi-) specific dataflow accelerators for some targeted non-computer-intensive application 

### HP: the machine (universal memory) 

- Have a massive universal memory, available for evert node 
- Supported by photonic networks, for fast data transfers 

1) Fast network is available 
2) NVRAM are available 
3) With a lower software cost 
4) Quicker access for massive data 

* Discussion 
    - each node sitll have it's local memory and cachess 
        1) Fast network does not sovle he memory-wall problem 
    - There a pool of global memory after local memory 
        1) For large data and data sharing 
        2) Higer bandwidth, higer latency
    - Converging the globla memory with storage (NVRAM) 
        1) manage NVRAM as extended memory
        2) selective in accessing global memory or storage file system\
    - The effective of global pool concept needs to be verified 
    

### Classes of Computers 
1) PMD 
2) Desktop Computing 
3) Servers 
4) Cloud/Edge/Clusters/WSC
5) IoT/Embedded Computers 

Back to compute architecture...

- Exercise in engineering tradeoff analysis 
    1) Find the fastest/cheapest/power-efficent etc. solution
    2) Optimization problem wiht 1000s of variables 
- All the variable are changing 
    1) At non-uniform rates 
    2) With inflection points 
    3) Only one gurantee: today's right answer will be wrong tomororw 
    4) On the other hand, Today's cold solution could be a cure of tomorrow's problem
- Two high-level effects: 
    1) tech push
    2) application pull

### Technology Push 
    1) What do two intervales have in common? 
        - 1776 - 1999 (224 years) 
        - 2000 - 2001 (2 years) 

Answer: Equal progress in processor speed

Computer architects work to turn additional resources into speed/power saving/functionality. 

### Computer Technology 
1) Performance improvements: 
    - feature size, clock speed 
2) Improvements in computer architectures 
    - enabled by HLL compilers, UNIX
    - Lead to RISC architectures 

3) Together have enabled: 
    - light weight archintects, etc...

### Current Trends in Architecture 
- Cannot continute to leverage Instruction-Level parallelism (ILP) 
    - Single processor perfromance 

- New modes for performance 
    1) Data-level parallelism (DLP)
    2) Thread-level parallelism (TLP) 
    3) Request-level parallelism (RLP)

- These require explicit progrmaming 

Classes of parallism in application: 
1) DLP
2) TLP

Classes of architectural parallelism:
1)ILP
2) GPU
3) Thread-Level Parallelism
4) Request-Level Prallelism 

### Style of Prallel Processing 
Data parallel: partitioning data
Task parallel: partitioning different task 

Task partitioning isn't that good but we can pipeling it but simple processing.

### Flynn's Taxonomy 

1) SISD
2) SIMD
3) MISD
4) MIMD

Comp Arch is an integrated approach 
1) what really matters is the functoning of the complete system
    - hadware, runtime, compiler, OS, and application
    - in networking, this called the end to end argument 
2) Comp arch is not just transistors, ISA, implementation 

3) Old view of comp arch
    - ISA
    - decisions reagrading 
    
4) Real computer architecture: 
    - specific requirements of the target machien 
    - design to maximize performance within constraints: cost, power, availability
    - includes ISA, microarchitecture, hardware

### ISA: Critical Interface 
Open source ISAs RISC V

### Basic Division of Hardware 
In time (vs. space) 
    - Fetch instrcution from memory     add r1, r2, r3 
    - Decode the instrction 
    - read input operands               

### Insruction Execution 
1) Instruction Fetch
2) Instruction Decode
3) Operand Fetch
4) Execute
5) Result store
6) Next Instruction 

ISA---
Classes: General-purpose registers and register-memory vs load-store 
RISC-V register 32 g.p., 32 f.p.

### Trends in Cost
    - Cost driven down by learning curve
        - yield 
    - DRAM: price closely tracks cost
    - Mircroprocessors: price depends on volume 
        - 10% less for each doubling of volume

### Building Computer Chips
- Complex multi-step process
1) slice ingots into wafers
2) process wafers into patterned wafers 
3) dice patterned wafers into dies
4) test dies, select good dies 










