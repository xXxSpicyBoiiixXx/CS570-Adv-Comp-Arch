#Class 7

### 2/1/2022

TODO: 

### Memory Herarchy Design (continue) 

* Six Advanced Optimizations 

1) Reduce hit itme 
2) Incerase bandwidth 
3) Reduce miss penalty
4) Reduce Miss rate 
5) 

### Merging Write Buffer 

- When storing to a block that is already pending in the write buffer, update write buffer 
- Reduces stalls due to full wrtie buffer 
- Do not apply to I/O addresses 

-- Merging write buffers in one block 

### Compiler Optimizations 

1) Loop Interchage
	- siwtchign the nesting of loops 
	- moves parallelism into the inside of a set of nested loops 
	- if a loop-carried depdnece is carried by an outer loop nesting, the the inner independent loops could be executed in parallel. 
	- Storing column or row wise, you can same mathematically but if you get the increase the optimability to increase locality 
** Loop Unrolling 
	- Duplicating the body of a loop some number of times 
	- Used in combination with other optimizations, so block by block 
** Loop Tiling 
	
2) Blocking 

3) Another method is hardware prefetching 
	- Fetch two blocks on miss (include next sequential block) 
	
	-- Comiliter prefetching is more complicated 
		1) Insert prefetch instructions before data is needed 
		2) register prefetch -- Loads data into register 
		3) cache prefetch -- loads data into chace

-- Combing with loop unrolling and software pipelining 

Bridging Gap: Data Prefetching 
	- Memory hierarchy model 
		1) Principle of locality 
		2) Work well if spatial and temporal locality exist among data accesses 

-- Fetch data in advnce
-- Fetch data in a timely manner

The question: What to prefetch? When to prefetch? 

If you prefetch early, it's pollution but if you prefetch too late it's already missed? 

-- Data prefetching is not mature yet
	1) Limited adaptive support 
	
	2) Limited coverage and accuracy

	3) Limited systematic support 

### Classification of Data Access Patterns

Markoc prefetching? 

### Use HBM (high bandwidth memory) to Extend Hierarchy 

- the assumpition is htat your locality is low, 

HBM is higher than DRAM? where is it put in the 6 advanced optimizations. 

** Reduced miss penalty: Deep memoery hierarchy
The intent of HBM is adding a new layer but this is before HDD 

Look at summary later, there is 10 different methods 

### Comments on Big Data 
-- Prefetching: cache and memory 
-- Compression and deduplication (delete duplicated stuff, which is like a survelinacne camera)  
-- In memory compression 
-- Graph processing/predicition 

### Virtual Machines -- for legacy code to run a new hardware 
-- Supports isolation and security 
-- Sharing a computer among many unrelated users 
-- enabled by raw speed of processors, making the overhead more accpetable 

1) System Virtual Machines 

-- Protextiong via virtual memory 

-- Role of architecture 

### Requirements of VMM
1) Guest software should: 
	- Behave on as if running on native hardware 
	- Not be able to change allocation of real system resources 
2) VMM should be able to context switch guests 
3) Hardware must allow: 
	- System use processor modes 
	- Privileged subset of instructions for allocating system 

### Impact of VMs on Virtual Memory 
- Each guest OS maintains its own set of pages tables 
	-- VMM adds a level of memory between phyiscal and virtual memory called real memory 
	-- VM maintains shadow page table taht maps guest virtual addresses to physical addresses 
		-- requires VMM to detch guest's changed to its own page table 
		-- Occurs naturally if accessing the page table pointer is a privileged operation 

### Extending teh ISA for Virtualization 
-- Objectives 
	- Avoid flushing TLB
	- Use nested page tables instead of shadown page tables 
	- Allow devices to use DMA to move data 
	- Allow guest OS's to handle device interrupts 
	- For security: allow programs to manage encrypted portions of code and data 

### Fallacies and Pitfalls 
1) Predicting cache performance of one program from another 
2) Simulating enough instructions to get accurate performance measures of memory hierarchy 
3) Not deliverying high memory bandwidth in a cahce-based system 

### Comments/Cross cutting 

1) Miss rate/miss penalty -- is miss rate the metric? 

... 

Look at this later 

# Memory System Performance and Optimazations 

### 3 questions 

- Why the applications slow down?
- Why there is a disparity in slowdowns? 
- Fix the problem? 

### Improve bia Data Access Concurrnece 

1) The complexity of CPU design 


-- Concurrence is more than bandwidth??? 

### Access Per cycle (APC) 
1) APC is measured as the numebr of memory access per cycle 
	- measures the overall memory system performance 
	- each memory level has its own APC value 

APC is the overall memory accesses requested at a certain memory level divided by the total number of memory access cycles at that level

AMAT doesn't have concurrency implementation unlike APC. 



