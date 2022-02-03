# Class 8

### 2/3/2022

TODO: Homework 1

### Concurrent Memory Performance and Optimization 

-- Locality 
-- Concurreny
-- AMAT 
-- C-AMAT 

We learned from the hardware perspective, so how do we optimize this. So we need hardware faster. 

We could do deep memory storage hierarchy 

So the traditional model AMAT is not that effective for concurrent data model so we propose APC, so from the memory centric. 

### Exhausted Testing 

1) With different benchmarks, and with different configurations
2) With advanced cache technologies 
-- nonblock cache 
-- pipelines cache 
- multiport cache 
- hardware prefetcher 
3) With single core or multicore 
4) APC always can do concurrency 

We use IPC and APC to coorelate with each other, while APC can measure different layers. 

If the coorelation is 90% then it is memory intensive of the whole system. 

With APCm is only memory intesneive. 

Spark benchmark suite <--- Check this out

Check out this paper "APC: A Performance Metric of Memory Systems" 

AMAT is not just a performance measurements but analysis tool; APC is only a measurement so that made us extend AMAT to C-AMAT

So Concurrent-AMAT 

Check out this paper "Concurrent Average Memory Access Time" 

### Concurrent AMAT 
C-AMAT = Hitcycle/ Ch + pMR * pAMP/Cm = 1/AP 

Ch = hit concurrency
Cm = pure miss concurrencty 
pMR = pure miss rate 
pAMP = average pure miss penalty 

A pure miss is a miss containinig at least one cycle which does not have any hit activity

### Concurrency and Pure miss
-- Miss is not important (pure miss is) 
-- The penalty is due to pure miss 

2 cycles for cache hit 

but if you miss so we have to wait another 3 cycles 

### Conventional AMAT 

AMAT is recursive L1 penalty can extend to L2 penalty etc. etc. you see the point.

### Recurisve in Memory Hierarchy 

AMAT is recurisve.... 

C-AMAT is also recursive 

Concurrent hit isn't mostly the contribution, the most of the contribution is the pealty because it's high, ebcause the next layer is slower than the next. 

People have studied miss ratio but not pure miss ratio 

We get a pure miss ratio, look at page 9 in the lecture. 

k is the ratio of pure(memory active) miss cycles and (memory active) miss cycles
Recall pure miss cause CPU stall, so ... 

### What does C-AMAT Say? 

C-AMAT is an extension of AMAT to consider concurrency 
- The same as AMAT, if no concurrenct present 

C-AMAT introduces the Pure Miss concept: 
    - ONly pure miss causes performance penalty 

High locality may hurt performance
    - High locality may lead to pure miss 

Two contributions of concurrency 
    - Increase bandwidth 
    - Latency hiding (overlapping) 

Latency is more important than increasing bandwidth, so hiding latency. 

C-AMAT also contains the latecny hiding (overlapping) factor

- Balance locality, concurrency and overlapping with C-AMAT 

### Imapct of C-AMAT 

1) New dimensions for optimization: locality, concurrency, latency, hiding and their balancing 
2) Can apply to each layer of a memory hierarcy 
3) Exisitng mechanisms are readily to be extended 
4) Concurrency as bandwidth increaser and latency reducer (overlapping): accurate measure the concurrencty contribution

### Misunderstanding of Memory Performance 

Optimal = Optimal Locality <--- not ture 
Optimal = Optimal Locality + Optimal Concurrence <---- Not true 

So how do we apply this to multi-core 

### Multi-core C-AMAT 

1) You could have last level cahce and have that be the bottle neck 

-- C-AMAT in muti-core: measurement 

If you go to a different hardware, you will probably can get a wrong answer. We have to use this correctly. 

C-AMAT Recursive in muti-core
1) C-AMAT is also recurisve in multi-core 

-- The recursive equations remain correct for both single core and single processor measurements
-- Prove (Homework) 
-- But there is a changing from private cache to shared cached 

Read through the paper 

### Summary 
1) Mutlicore C-AMAT can be measured in two ways 
    - SIngle-core C-AMAT 
    - Multicore C-AMAT 

2) For single-coer measurement, all C-AMAT properties remain, execpt that the memory active cycle are the memory active cycle for that core. 
3) For multicore measurement, when each core has individual cache, the memory is active if any of the caches is active 
4) The realtion between eindividual C-AMAT and global C-AMAT under multicore measurement is given 
5) The pure miss of the multicore C-AMAT is the sum of the pure misses of the all the individual cores. 

### C-AMAT on GPU 
1) C-AMAT is a general formula and needs to be tailored for a given architecture 

The special thing of GPU is that of Warp: SIMD operation

So what does hit and miss if things everyone does the same thing

### C-AMAT interpretation in GPGPU 

1) Warp-level cache hit: When all threads of the warp have the cahce hit 
2) Warp-level cache miss: When one or more threads of the warp has a cahce miss 
3) Warp-level cahce pure miss: All warps cannot be scheduled due to warp-level miss 
4) Average Warp-level hit concurrency: accumulated warp-level hit cycles/active warp-level hit cycles 
5) Average Warp-level pure miss concurrecnt: accumulated warp-level pure miss cycles/active warp-level pure miss cycles. 

### How to use C-AMAT in Optimization? 

We use Pure Miss based on scheduling...We get a graph for C-AMAT based Analysis for bottleneck class

### C-AMAT Based Evaluation 

Look at the power point to compliment the graph. 

Static doesn't work for concurrency, we need to do dynamic improve so this is a scheudle issue. 

There is differnet cases for C-AMAT Based evaluations...

The last couple of slides are just ideas... 
