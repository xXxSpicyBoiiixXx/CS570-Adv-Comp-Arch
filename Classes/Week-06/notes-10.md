# Class 10

### 2/22/2022

TODO: 

### Impack of Memory Bound Speedup 

Remember Sun and Ni's Law.... 

We need to rethink speedup

-- When we fix the problem size then the speed up the size. 

But problems can vary, so we get a model of speed up

Sun and Gustagson is a generalized speed up.. 

The Berklely Roofline Model gives you where the bottleneck is depending on your limitations.

### Cache Concurrency 

1) Reducing miss rate 
 - More associativity  
 - Alernative to associativity .... 

### Victim Cache: Reducing Conflict Misses 
- Idea: Use a small fully associative buffer (victim cache) to store recently evicted blocks
-- Can avoid ping ponging of cache blocks mapped to the same set
-- A con is adding complexity

### Hashing and Pseudo-Associativity 
- Hashing: Use better "randominzing" index functions 
+ can reduct conflict misses 
-- More complex to implemente: ca lengthen critical path

- Pseudo-associativity (Poor Man's associative cache) 
1) Serial lookup: On a miss, use a different index function and access cache again 
2) Given a direct-mapped array with K cache blocks 
+ Less complex than N-way 
- Longer cache miss rate

### Skewed Associative Caches (I) 
-- Search both levels by going in the middle 

### Non-Blocking Caches (and MLP) 

- MLP (Memory Level parallelism) 
-- Enables latency tolerance: overlaps latency of differnet misses 

MSHR 

If cahce miss, MSHR hit 
)f cache hit, no MSHR is needed 

### Enabling High Bandwidth Caches 

CASE III: Shared Instruction Windows 

-- Multiple Instructions per Cycle
1) Can generate multiple cache accesses per cycle 
2) Ensure the ache can handle multple accesses in the same clock cycle? 

-- True multiporting 
! Each memory cell has multiple read or wrtie ports 
+ Truly concurrent accesses 
-- Expensive in terms of area, power, and delay 

-- Virtual Multiporting 
! time-share a sing port (your cache becomes sequential) never one cycle 

-- Multiple Cache Copies 
! Stores update both caches 
! Loads proceed in parallel 

Good Scalabilty -- Hardware cost is high

-- Banking (interleaving) 
+ NO increase in data store area
-- cannot always satist multiple accesses 
-- crossbar interconnect in input/output 

-- Bank Conflicts 
! Two accesses are to the same bank 
! 

### Piplnied Approach

### Caches in Multi-Core Systems 

- Multi-core 
1) cahce efficency 
2) Priate versus shared caching 
3) fairness/QoS
4) shared data
5) How to organize/connect caches 

- Placemnet/insertion 
1) What is most profitable to insert into cache 
2) Dead/uselees blocks 

- Cache Coherence: How do you we keep the same cache the same.

-- Maintaining Coherence: Need to gurantee that all processors see a consistent value for the same memory location 

Coherence needs to provide: 
-- Write propagation: guarantee that updates will propagate 
-- Write serialization: provide a consistent global order seen by all processors 

Coherence: Update versus Invalidate 
Option 1: push an update to all copies 
Options 2: ensure there is only one copt, update it 

On a read: 
-- If local copy isn't valid, put out request 

On a write: 
-- read blcok into cache as before 

what is protocol -- it is coordination from algorithms 

Update is used for read intensive and don't modifiy often but if you update often then invalidate is better. 

Two Cache Coherence Methods 
1) Snoopy bus 
2) Directory 

### Snoopy Bus 

-- Very quick and broadcast but not scalable no more than 32 processor, the bus becomes saturated.

### Directory

-- You have a table, single point off serialization per block. The table will inform everyone. 

### Directory Based Coherence 

### Snoopy Cache Coherence 
- People use all the time 
- good for small scale multiprocessors 

We use snoopy cache but directory is used to make snoopy more scalable. 
When we use dragon fly we have local and global and used both of htem to work together. 


