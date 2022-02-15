#Class 9

### 2/15/2022

TODO: Do proposal

### Revisit Memory Optimizations

- Increasing Miss Concurrency 

1) Non-Blocking Caches 
- Increasing the number of MSHR 
- Multiple MSHRs can hand;e the misses concurrently

So what's the cost, the cost is obviously Increase locality can increase concurrency. 

### Locality and Concurrency 

* Multi-banked caches 

### What is false sharing 

- Share the same cache line but do not share the elements in the cache line 
- Trigger the snoop requests to maintain the cache coherence 
- Generate the additional performance costs and contentions to shared cache and private cache. 

### Concurrecny-Aware Locality (CaL) 

What is the concentration of locality and concurrecny. 

Look at this paper maybe?? 

### Memory Access 

DRAM architecture: bank, row, column 

- Three Dimension 
- Steps of accessing 
1) Pre-Charge 
2) Row Access
3) Column Access 
- Faster 
1) Different Bank
2) Same Row

* Bank-first Scheduling 

* Row-first scheduling 

* Multi-Core Memory Access 
- Core-aware memory scheudling 

1) Idea: scheduling scheme should consider the source of memory access
2) Reason 
3) Feasibility:
4) 

Concurrenct can be improved by locality

### Reducing pure miss rate 

1) Larger cache blocks
- Reducing compulsory misses, may increasing pure miss penalty. 

2) Higher Associativity 
- Reducing conflict misses, may increasing hit time 

3) Larger cache size 
- Reducing capacity misses, may increasing hit time 

4) Schedule the cache requests 
- Let the puremisses happen at the same time
- Insert/schedule a hit to convery a pure misses to miss

5) Critical word first and early restart 

### Open Questions 
? The above proposed methods either locality-based existing methods or unproved rough ideas 
- Do we have a method to reduce pure miss (not miss)?
- Do we have a method to reduce C-AMAT with a locality... etc.

? Improve existing method based on 
- the pure miss concept
- CaL or LaC

? Overlapping based latency hiding 
- Big potential but is largely untouched 

? Out of box thinking: do it
- Hermes, LABIOS 

### In-Memory Computation 

1) Push from Technology 
- Controllers close to DRAM
- Industry open to new memory architectures 

2) Pull from System and Applications 
- Data access is a major system and application bottleneck 
- Systems are energy limited
- Data movement much more eneter 

### TWo appraoches to PIM 
1) Minimal change DRAM to enable simple yet powerful computation primitives 
2) Exploit the control logic in 3D stacked memory to enable more comprehensive computaiton near memory.

### Elastic Computing 
1) Elastic computing is a concept in cloud computng.... Elastic Computing Atchitecture.

### Pace Data Transfer
1) Architecture Design and Configuration 
2) System Design and Optimization
3) Algorithm Design and Optimization 


 
