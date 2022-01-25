#Class 5

### 1/25/2022

TODO: Proposal due next week, and homework 0 

## Memory Hierarchy Design

-- Programmers want unlimited amounts of memory with low latency 

-- Fast memory technology is more expensive per bit than slower memory 

-- Solution: organize memory system into a hierarchy 
1) Entire addressable memory space available in largest, slowest memory 
2) Incrementally smaller and faster memories, each containing a subset of the memory below it, proceed in steps up toward the processor 

-- Temporal and spatial locality insures that nearly all references can be found in smaller memories.
1) Gives the allusion of a large, fast memory being presented to the processor. 

There is a memory perfromance gap between processor and memory. 

1) Memory hierarchy design becomes more crucial with recent multi-core processors: 
    - Aggregate peak (request) bandwidth growas with # cores 
        -- Intel Core i7 can generate two references per core per clokc 
        -- Four cores and 3.2 GHz clock 
        e.g. = 409.6 GB/s 
    - DRAM (supply) bandwidth is only 8% of this (34.1 GB/s) 

    - Requires: Multi-ports, pipelined caches, two levels of cache per core, shared third level cache on chip

### Performance and Power 

- High-end microprocessors have > 10 MB on chip cache 
    1) COnsumes large amount of area and power budget 

Power consumpition is a problem in all sectors.

### Basics 
1) When a word is not found in the cache, a miss occurs: 
    - Fetch word from lower level in hierarchy, requiring a higher latency reference 
    - Lower level may be another cache or the main memory
    - Also fetch the other words contained within the block 
        -- Takes advantage of spatial locality 
    - Place block into cache in any location within its set, determined by address

2) Miss rate: fraction of cache access that result in a miss

3) Causes of miss
    - Compulsory
        -- First reference to a block 
    - Capacity
        -- Blocks discarded and later retrieved 
    - Conflict
        -- Program makes repeated referecnes to multiple addresses from different blockes that map to the same location in cahce 

### Terminology 

1) Miss: data needs to be retrieve fro ma block in the lower level 
    - Miss rate = 1 - (hit Rate) 
    - miss penality: Time to replace a block in the upper leve + time to deliver the block the processor 
    - hit time << miss penalty 

There is a fourth kind 
1) coherence misses: 
    - in multiprocessor systems and multicore processors 
    - sometimes are false sharing 

Speculative and multithreaded processors may execute other instructions during a miss 
    - reduces perfromance impact misses


Convential AMAT: 

AMAT is recurisve. 

-- Traditional AMAT where AMAT = hit cucle + MR * AMP 

MR us the miss rate of cache accesses and AMP is the average miss penalty 

but when we have more 

AMAT = Hit Cycle + MR * AMAT_2 = Hit Cycle + MR * (H_2 + MR_2 * AMP_2) 

AMAT = Hit Cycke ....

### Reducing Penalty: Multi-Level Cache 

### CAhce Performance 
- CPU execution time = 
- Memory stall cycles 
- CPI 
- Memory Stall Cycles

Example 1 in Slides 

Example 2 in Slides

Where you put your data is called your palcement 

1) n sets -> n-way set associative 
-- direct-mapped cache -> one block per set 
-- Fully Associative -> one set 

2) Writing to cache: two strategies 
-- Write-through 
    -- immediately update lower levels of hierarchy 
-- Write-back 
    -- only update lower levels of hierarchy when an updated block is replaced 
-- Both strategies use write bugger to make writes asynchronous 

1) Cache Associativity 

Fully Assoicative: Block can go anywhere in cache 

Direct Mapping: Block can only go in one place in the chache 

N-way Assoicative: Block can go in one of a set of places in the cache: a set is a group of blcok in the cache

### Block Size

-- Block Size: Typical values for L1 cahce: 32 to 128 bytes 

-- Explout spatial locality: 
    1) Bring in larger blocks 
    2) Slows down time ...


How is a block found if it is in the cache? 

- Tag to check all blocks in the set, index to select the set, and offset to select desired data with in the block 

- Tag on each block 
1) valid bit -- if not set, there cannot be a match on this address 
2) No need to check index or block offset 

### Six cache optimizations 

1) Larger block size 
-- Reduce compulsroy misses 
-- Increases capacity and conflic misses, increase miss penalty 

2) Larger total cache capacity to reduce miss rate 
-- Increases hit time, increases power consumption 

3) Higer associativity 
-- Reduces conflict misses 
-- Increases hit time, increases power consumption 

4) Higher number of cache levels 
-- Reduces overall memory access time 

5) Giving priority to read misses over writes 
-- reduces miss penalty 

6) Avoiding address translation in cache indexing 
-- reduces hit time

### Write Policy 

1) Write through - the information is written to both the block in the cache and to the block in the lower level memory

2) Write back - the information is written only to the block in the cache. The modified cahce block is written to main memory only when it is replcaed? 
    -- is the line clean or dirty? 
    -- Write back buffer is typically emplyed to ....

PROS and CONS of each... read later
