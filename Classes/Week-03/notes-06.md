#Class 6

### 1/27/2022

TODO: Two-Page Project proposal due by Feb 1st, the final paper is due on April 28th
      Next Tuesday is in person
      Introduction to yourself

### Write Buffer for Write Through 

- A Write Buffer is needed between the Cache and Memory 
    1) Processor: Write data into the cache and the write buffer 
    2) Memory Controller: Write Contents of the buffer to memory 

- Write buffer is just a FIFO: 
    1) Typical number of entries: 4 to 8 
    2) Works find if: Store frequency (w.r.t time) << 1/DRAM write cycle 

- Memory System Designer's Nightmare: 
    1) Store frequecny (w.r.t time) -> 1/DRAM write cycle 
    2) Write buffer saturation

### Cache Software Considerations 

1) Block Placement 
    - Where can a block be placed in the cache? 

2) Block replacement
    - which block should be replaced on a miss? 

3) Write Strategy 
    - What happen on a write? 

There is some replace policies 

- LRU (Least Recenetly Used) 
- MRU (Most Recenetly Used) 
- LFU, MFU (Least Frequently Used, Most Frequently Used) 
- FIFO, Random (First In, First out) 
- LRU-2, LRFU, LRMFU (Least Recently Used - 2, Least Recently Frequency Used, Least Recentky Most Frequenty Used) 
- LIRS 
- ARC 

1) Recency based - LRU 
    - Simple, easy to implement 
    - Captures "clustered locality of reference"    
    - Does not exploit frequency 

2) Frequency 

3) Recency + Frequency 
    - LRU-2 
    - LRFU 
    - LIRS 
    - ARC 

LIRS and ARC are more for memory but not for cache 

### More Improvements
1) Keeping track of a number of recently evcited pages increase complexity 
2) ADAPTING TO ACCESS PATTERNS increases the complexity 
3) These adaptive policeis (LIRS and ARC) are good for memory manager. Can cache manager handle complex policies 

### Memory Technolgoy Metrics 

1) Memory access altencies impact how quickly the information is available to the processor 

2) Memory bandwidth defins the maximum rate at which information is available for processing, preventing processor starvation 

3) Capacity, determines maximum problem size possible to compute (otherwise memory starvation and potential contention between competing processes/threads may result)( 


4) Capacity Density: Determines additional costs associated with assembling storage of required capacity, such as volume, or device footprint 

### Memory Issues 
- Latency
- Bandwith
- Capacity
- Energy 

This is from an hardware point of view 

### Memory Tech and Optimizations from a software point of view 
1) Latecy is concern of cahce 
2) Bandwidth is concern of multiporcessors and I/O
3) Access time 
    - time between read request and when disred word arrivesw 
4) Cycle time 
    - minimum time betwen unrelated requests to memory 

- SRAM memory has low latency, use for cach 
- Organize DRAM chips into many banks for high bandwidth, use for main memory. 

### Main Memory Implementations 

1) Static Random Access Memory (SRAM) 
- fastest access time 
- Modest power consumption per bit 
- relatively expensive to manufacture 
- discrete SRAM is slowly displaced in 
...
DRAM
...
FLASH 

Why is DRAM is slow? -- It's becasue DRAM uses one transistor so it has to refresh them while SRAM just has more transistor but uses more power. 

Some foreshadowing: Limits of Charge Memory... 
1) Difficult charge palcement and control 
    Flash: floating gate charge 
    DRAM: capacitor charge, transistor leakage 

2) Data retention and reliable sensing becoming difficult as charge storage unit size reduces 

### SRAM versus DRAM 

SRAM: Requires low power to retain bit, requires 6 transistors/bit 
DRAM: Must be rewritten after being read, must also be preiodically refreshed, one transisor/bit, address lines are multiplexed (upper half of address: row access strobe (RAS) and lower half of address: column access strobe (CAS))


Amdahl: Memory capacity should grow linearly with processor speed, unfortuanatley, memory capacity and speed has not kept pace with processors 

Some optimizations: 
    1) Multiple accessses to same row
    2) Synchronous DRAM 
        added clock to DRAM interface 
        burst mode with critical word first 
    3) Wider interfaces 
    4) Double data rate (DDR) 
    5) Multiple banks on each DRAM device 


-- Reducing power in SDRAMs: 
    1) Lower voltage 
    2) Low power mode (ignores clock, continues to refresh) 

-- Graphics memory: 
    1) Achieve 2-5 X bandwidth per DRAM vs. DDR3 
    
What is xPU --> Some time of accelarator, this is an AI processing unit. 

### Flash Memory 

1) Types of EEPROM 
2) Types: NAND (denser) and NOR (faster) 
3) NAND Flash: 
    - reads are sequential, reads entire page 
    - 25 us for frist byte, 40 

baiscally nonvioletl

- must be erased (in blocks) before being overwritten 
0 nonvolatile, cane 

...

### Memory Dependability 

- Memory is susceptible to cosmic rays 
- soft errors: dynamic errors 
- hard errors: permanent errors 
- chipkill: A RAID-like error recovery technique 

### Memory Hierarchy Optimizations 

Advnaced Oprtimization Techniques 
1) Reduce hit time
2) Increase Bandwidth 
3) Reduce miss penality
4) Reudce miss rate 
5) Reduce miss penalty or miss rate via parallelization 
...many more.

WE need to make computing architectures more data-centric designs 

### Goal: Processing Inside Memory 

# Even more advanced optimizations 
- PIM
- NDP
- Data processing Unit 
- Are they part of the von neumann machine? -- Homework? 

### Way Prediction 

- To impove hit time, predict the wat to pre-set mux 
    1) Mis-prediction gives longer hit time 
    2) Prediction accuracy 
    3) First used on MIPS R10000 in the mid 90s 
    4) Used on ARM Cortex-A8
- Extends to predict block as well 
    1) Way selection 
    2) Increases mis prediction penalty 

### Piplined Chaches 
- Piplie chace access to improve bandwidth 
- Increases branch mis-prediction penalty 
- Makes it easier to increase associativity 

### Multibanked Caches 

1) Organized cache as independent banks to support simultaneous access 
    - ARM Cortex-A8 supports 1-4 banks for L2 
    - Intel i7 supports 4 banks for L1 and 8 banks for L2 

2) ...

### Nonblocking Caches 

1) ALlow hits before previous misses complete 
    - hit under miss 
    - hit under multiple miss
2) L2 must support this 
3# In general, processots can hide L1 miss penalty but not L2 miss penalty 

### Critical Word First, Early Restart 
1) Critical word first 
    - Request missed word from memory first 
    - Send it to the processor as soon as it arrives 
2) Early restart 
    - Requset words in normal order 
    - SEnd missed wok to the processor as soon as it arrives 















