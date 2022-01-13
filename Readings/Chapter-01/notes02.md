# Classes of Computers 

Things have changed obviously

### IoT/Embedded Computer 

Internet of things referes to embeeded computers that are connected to the internet, typically via wireless networks.

### PMD (Personal Mobile Device) 

This is a term that is a collection of wireless devices with multimedia user interfacs (cell phones, tabelt computer, etc.) 

These are meida devices, so a real-time perfromance requirement means a segment of the application has an absolute maximum execution time. 

Now there is certain phrase, called soft real-time where we have the average time for a particular task is contrained as well as the number of instances when some maximum time is exceeded. 

The main characteristics of these devices are to minimize the memory and the need to use energy efficiently. 

### Desktop Computing 

The main goal is for price-performance here where the combination of performance and price of a system is what matters most. 

### Servers 

Servers have become the backbone of large-scale enterprise computing, where it's basically the replacement for large scale mainframes.

A characteristic of servers is scalability e.g. the computing capcity, the memory, the storage, and the I/O bandwidth of a server is crucial. With this in mind, we also have that servers have effecitive throughput where the overall performance of the server either in terms of transaction per minute ot web pages served per second. 

### Cluser/Warehouse-Scale Computers (WSC)

A cluster is basically a large number of desktops or servers connected together in the scale of tens or thousands that act as one. The most expensive part about these WSC is that of power and cooling of computers inside of a warehouse. 

Now there is a stark difference between these and servers is that WSC use redudant, inexpensive components as the building blocks where they rely on software later to catch and isolate the many failures taht will happen with computing at this large scale. 

Now Super Computers are realted to WSC in the sense that they are just as expensive, the difference is that super computers differ by emphasizeing floating point performance and by running large, communication intensive batch programs that can run for weeks at a time. Where WSC focuses on interactive application, large scale storage, depandability, and high internet bandwidth. 

### Classes of Parallelism and Parallel Architectures 

The primary concern is that of being energy and cost with the constraits of all our computers (PMD, Desktop computing, Servers, WSC) there are essetially two types of parallelism... 

1) Data level Parallelism 
2) Task level Parallelism

So Computer hardware tries to exploit these two types of parallelism in four ways 

1) Instruction level parallelism 
2) Vector architectures, GPUs, multimedia instruction sets
3) Thread-level parallelism
4) Request-level parallelism 

So we can take each of these and from out lovely parallel and distributed systems class we can classify them to be the following 

1) SISD --> Uniprocessors
2) SIMD --> Same insturctions but multiple processors
3) MISD --> No commerical multiprocessor yet 
4) MIMD --> MIMD is more flexible as processor fetches its own instruction and operates it's own data, unfortuatnly it's more expensive compared to it's counter part SIMD.

