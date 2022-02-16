<<<<<<< HEAD
# Class 9

### 2/8/2022

TODO: For Proposal it will have a hardware part. Redo proposal. Focus on the hardware component.  

### Question 

- With the introduction of C-AMAT, what is the utilization of a memory system?

### History Review 

- Memory is the performance bound 

- The memory/CPU gap becomes larger and larger 

- Solutions of Memory-Wall 
1) Better memory device/technology (memory wall problem becomes worse) 
2) Memory Hierarchy (Size issue, data movemnet issue) 
3) complictiy (concurrency, utilization issues) 

- C-AMAT is proposed to address the issue of utilzing concurrency under modern memory hierarchy.

### What Missing (practical impact) 

- From multi-core to GPU 
1) GPU is special case of ASIC, other ASIC such as AI?
2) Special hardware considerations? 

- From performance analysis to performance optimization 
1) Scheduling -- Pure miss based, PIM, overlapping, etc. 
2) Increase concurreny -- Prefetching, writeback, etc. 
3) Others -- Research, hardware support for concuurency, a survey, etc. 

The question still reminds, can we apply C-AMAT directly to improve memory system performance. 

There is a textbook formular for a traditional AMAT model in appendix. This is a memory stall time. 



=======
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


 
>>>>>>> 69a2225c943370656881145fc0b83b6ba4534c14
