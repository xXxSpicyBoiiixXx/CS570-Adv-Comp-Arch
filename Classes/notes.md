# Notes2

### 04/06/2022


GPU organization ---> SIMD lanes (thread processors) 

- Typically used for image processing 

SIMT --> Single Instruction Multiple Threads 

^ This is in GPU microarchitecture overview 

-- Instructions Issue 
1) Select a warp and issue an instruction from its I-buffer for execution 

SIMT Memory Access 
-- Same instruction in different threads uses thread id to index and access different data elements 

--> When you group threads divergenece? 

Modern GPUs have caches
1) to minimize accessses to main memory 

Problem: Some threads in the warp may hit others may miss 
Problem: One thread in a warp can stall the entire warp if it misses in the cache. 

Need to tolerate memory divergence and intergrat solutions to branch and memory divergence. 

### SIMD Architectures vs GPUs 

GPUs have more SIMD lanes 
GPUs have hardware support for more threads 
Both have 2:1 ratio between double and single precision performance 
Both ahve 64 bit addresses but GPUs hve smaller memory 
SIMD arch have no scatter-gather support 

--> GPUs suffer from being coprocessors 
    GPUs have flexiblity to change ISA

--> Concentrating on peak performance in vector architecutres and ignoring start-up overhead 
    Overheads require long vector lengths to achieve speedup 

--> Increasing vector performance without comparable increases in scalar performance 
--> You can get good vector performance without providing memory bandwidth 
--> On GPUs, just add more threads if you don't have enough memory performance

### Roofline Performance Model 
--> Memory and Computation bounds 

There is always those bounds no matter what the program says







