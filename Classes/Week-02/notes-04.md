#Class 4

### 1/20/2022

TODO: Homework - Search for chips after 2010 and write about it with a research paper.

### Principles of Computer Design

- Take advantage of parallelism 

- Principle of Locality (conventional) 

### Amdahl's Law

- Execution time of any code has two portions

1) Portion 1: not affected by enhancement 
2) Portion 2: affected by enhancement 

CPU Time = CPU clock cycles for a program * Clock cycle time 

Look at the various equations. 

Different instruction types having different CPIs 

### System Cost 

- Cabient (6%)
- Processor Board (37%)
- I/O Devices (37%)
- Software (20%)

### Trends in Technology 

- Integrated circuit technology (Moore's Law) 
- DRAM capacity
- Flash capacity 
- Magnetic disk capacity 

### Bandwidth and Latency 

- Bandwidth or throughput 
	1) Total work done in a given time 
	2) How many stuff can transfer 

- Latency or response time 
	1) Time between start and completion of an event 
	2) How fast can hardware react

We have a memory wall and disk wall problem.

### Tracking Technology/Performance Trends 

1) Disk 
2) Memory 
3) Network 
4) Processors 

- Compare for Bandwith versus Latency improvements in performance over time 

- Bandwidth: number of events per unit time (e.g. M bits/second over netowrk, M bytes/second from disk)
- Latency: elapsed time for a sinle event (e.g. One-way network delay in microseconds, average disk access time in milliseconds)

### Transistors and Wires 

### POwer and Energy 
Problem: Get power in, get power out

- Thermal Design Power (TDP) 
	1) Characterizes susteined power consumpotion

.... Intenret 

Dynamic Energy and Power 

- Reducing clock rates reduces power, not energy 

NO ONE TALKS ABOUT FREQUENCY 
- Because more frequency = more power consumption 

### Reducing Power 

### Static Power 
- Static power consumption 

### Measuring Performance 

- Typical performance metrics: 
	1) Response time
	2) Throughput 

- Speedup of X relative to Y 
	Execution time_y/Execution time_x 

- Execution Time 
	Wall clock time: includes all system overheads 
	CPU time: only computation time 

- Benchmarks 
	Kernels 
	Toy Programs 
	Synthetic Benchmarks 
	Benchmark suites 

### Dependability 

- Module reliability 
	1) MTTF
	2) MTTR 
	3) MTBF
	4) Availabiltiy = MTTF/MTBF

### Technology Change 
	- All exponential laws must come to an end 
		1) Dennard scaling (constant power density) 
		2) Disk Capacity
		3) Moore's Law 

### Fallacies and Pitfalls 

1) Microprocessors are a silver bullet 
	- performance is not a programmer's burden 
2) Falling prey to Amdahl's Law
3) A single point of failuter 
4) Hardware enhancements that increase perfromance also improve energy efficeincy, or are at worst energy neutral 
5) Benchmarks remain valid indefinitely 
	- compiler optimizations target benchmarks

-- The rated mean time to failuter of disks is almost 140 years so disks practically never fail 
-- Peak performance tracks observed performance 
-- Fault detection can lower availability 

### Benchmark Pitfalls 
1) Benchmark not representative
	- Your workload is I/O bound, SPEC is useless
	- SPEC is evolving, it is suite 

2) Benchmark is too old 
	- Benchmarks age poorly, benchmarking pressure causes vendors to optimzie compiler/hardware/software to benchmarks 

### More on performance 

1) Time and performace: Machine A n times faster than Machine B 

### Iron Law 
1) Insturction/Program
	-- Insturctions executed, not static code size 
	-- Determined by algorithm, compiler. ISA  
2) Cycles/Instruction 
	-- Determined by ISA and CPU organization 
	-- Overlap among instructions reduces this term
3) Time/Cycle 
	...

### Our Goal

1) Minimuze time whcih is the product, Not isolated terms 
2) Common error to miss terms while devising optimizations 
3) Botttom Line: CPI 

Look over CPU performance equation.

The CPI formula 

Read Speed versus Time in the last slide. 



