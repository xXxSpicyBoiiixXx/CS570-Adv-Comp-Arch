#Class 2 

### 1/13/2022

The birth place of the whole computer architecture is the Von Neumann machine. 

Computer Architecture = the way a computer works.

### Computer Architecture Today (II) 

Many new demands from the top (problem, algorithm, program/language)

Many new issues at bottom (etc. etc.) 

So the solution, we only get a partial system here and there we get an increasingly complex system. 

### Many new concepts investigated tdoay 

1) New computing paradigms (rethinking the full stack) 
* PIM, PND
* Neuromorphic Computing <-- Interesting? 
* Fundamentally secure and dependable computers 

2) New Accelerators (Algorithm-Hardware Co-Designs) 
* AI and ML
* Graph Analytics 
* Genome Analysis 

3) New Memoreis and Storage Systems 
* Non-volatile Main Memory 
* Intelligent Memory 

### Role of the computer architect 

* Look backward (Examine old code) 
* Look forward (Listen to the dreamers) 
* Look Up (Nature of the the problems)
* Look Down (Predict the future of technology) 

### Look Backward (to the past) 

1) Understand the tradeoffs and designs

### Look Forewards

1) Push the state of the art, evaluate new desings

### Look Up 

1) Understand the important problems and their nature 
2) Develop architectures and ideas to solve important problems 

### Look Down 
1) Understand the capabilities of the underlying technology
2) predict and adapt to the future of technology, enable the future technology. 

# The Power Abstraction 

* Levels of transformation create abstractions 
1) Abstraction: A higher level only needs to know about the interface to the lower level, not how the lower level is implemented.

ex. higg-level language programmer does not really need to know what the ISA is and how a computer executes instructions


IMPORTANT: ABSTRACTYION IMPROVES PRODUCTIVITY

So the question is why would you want to know what goes underneath and above? 

### Crossing the abstraction layers 

1) Understand how a processor works underneath the software layer and how descisions made in hardware affect the software/programmer 

2) comfortable in making desing and optimization decisions that cross the boundaries of different layers and system components

### Takeaways 

-> Driven by huge hunger for data (big data), new applications (ML/AI, graph analytics, genomics), even grater realism...

-> Significant difficulties in keeping up with that hunger at the technology layer

### FIVE WALLS 

1) Energy
2) Reliability 
3) Complexity 
4) Security 
5) Scalability

The main thing here is what is behind programs. 

### Hot Developements

* Manipulating ISA
* Virtualization
* Parallelism 
* Remove the Memory Wall
* Communication
* Energy Efficient 
* Exotic Exploration 

### Forces on Computer Architecture 

- Understanding the design techniques, machine structures, technology factors, evaluation methods that will determine the form of computer in 21st century 

Technology, Parallelism, PL, ISA, Compilers, History, OS, Application. 

So computer architecture supports all this. 

### Things I should know...
-> Basic Design
-> Some Assembly Language 
-> Memory Addressing (virtual vs physical mapping 
-> Boolean Algebra

### Things I will learn 
-> Memory Organization 
-> Performance quantification and issues 
-> ILP 

# Conventioanl Wisdown in Comp Arch. 

Old CW: power is free, transisitors expensive 
New CW: Power wall, power expensive, Xtors fre

Old CW: Sufficiently incerasing ILP via compilers 
New CW: ILP Wall, law of dimishing returns on more HW for ILP 

Old CW: Multiples are slow, memory access is fast 
New CW: Memory wall, memory slow, multiples are fast 

Old CW: Uniprocessor perfromacne 
New CW: Power Wall + ILP Wall + Memory wall = Brick Wall 

Old CW: Write is free, read may cost CPU delay
New CW: NvRAM is very slow in write but fast in read 

QUESTION: Do we need to rethink how to handle write back, and how to handle write in general 

Old CW: Memroy system is layered and volatile
New CW: Memrot system is tiered and could be nonvolatile

QUESTION: How do we utilize deep memory hierarchy 

# Some History

Intel 8080, 1975, 4,500 transistors

Intel 8086, 1978, 29,000 transistors 

Intel 286, 1982, 90,000 transistors 

Intel 386, 1985, 229,000 transistors 

Intel 486, 1989, 1.2 million 

Intel Pentium, 1993, 3.1 million

Intel PPRO, 1995, 5.5 million

Intel Prentium 4, 2001, 42 million 

Intel core 2, 2006 290 million 

Intel Negalem-EX, 2010, 2.3 billion 

2021: Cerebras WSE-2, 2.6 trillion 

Largest GPU: 54.2 billion transistors 

### New way of thinking....

Moore's Law is ending...yes, but is actaully not since most companies can double the number of transisitors. 

But it is not the transistors, it is Dennard Scaling, Dark silicon. 

The power consumption (Dennard Scaling) is the issue but we can have many core technologies, computing power still can increase. 

Is many core technologies a solution, yes but it is not scalable. Okay but why??? It;s not technolgoy but it's the memory. 

SUN & NI's LAW <- memoery bounded speed up 

### Why Data Centric? 

- Processor perfromance increases rapidly
- processor-memory spped gap keeps increasing 







