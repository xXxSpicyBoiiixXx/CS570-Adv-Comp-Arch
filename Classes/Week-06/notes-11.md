# Class 11

### 2/24/2022

TODO: Homework 4 and 5

### Improving Basic Cache Performance (new development) 

-- Multicore Issues in Chaching 
1) Private cache: Cache bleongs to one core 
2) Shared cache: Cahce is shared by multiple cores 

Private: 
-- Advantages: 
1) Dynamic partitioning 
2) Easier to maintain cohernece 
3) Shared data and locks do not ping pong between cahces 

--Disadvantages 
1) Cores incure conflic misses due to other cores' accesses

Software Approaches for Higher Locaility 

-- Resturcting Data Layout (I) 
1) pointer based traversal (random acceess) 
2) assume a hige link list 

-- Restructing Data Layout (II) 
Idea: separate frequently, used fields of a data strcutre and apck them into a separate data structure 

1) Locality 
2) Parallelism 
-- Inserting prefetch instructions 

Non-Blocking Caches (and MLP) 
- Enable cahce access when there is pending miss 
- Enable multiple misses in parallel 
    1) Memory-level parallelism (MLP) 
    

Open Question: Locality within Concurreny? 

1) New and old applications? 
2) Code Restructure 
3) Placement and Scheduling 
4) How do we conduct the optimizaiton?
5) How do we measure it?
6) How can C-AMAT and CaL help? 

### Ideal Memory 
- Zero access time (latency) 
- Infinite capcaity 
- Zero cost 
- Infinite bandwidth 

The Problem 
1) Physical memory is of limited size (cost) 
- What if you need more?
2) ISA can have an address space greater than the physical memory size

You need some mapping 

PAge size is bigger than your chace size. 

VM definition: 
- Page Size: 
- Address Translation: 
- Page Table: 

Each Process has its own virtual address space
- Full address space for each program 
- Simplifeis memory allocations, sharing, linking, and loading 

Address Translation: 

You could get a page fault, your physics space is larger than your vierual (in the class we're focused on the hardware part)

Servicing a Page Fault 

Cache vs Page Replacement 
- Physical Memory (DRAM) is cache for disk 

Where is TLB in Memory Hierarchy? 
-- People never do the mapping at the L1 level. 
-- We compute based on the virtual address, there are no problems since they are so small. 

In L1 only does computation does the mapping in virutal

It depends on the page table it depends on L2 or L3 for the TLB 

### Virtual Memory 
Homonym Problem: 1 Virutal address maps to multiple phyiscal addresses 
Synonym Problem: Multiple Virtual addresses map to 1 physical address 

Hononym Solution - Flush TLB and caches on context switch 
Synonym Polution - Depends on cache size and page size 

PIVT Cache
VIVT Cache
PIPT Cache 
VIPT Cache

 

