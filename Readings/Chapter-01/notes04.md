# Trends in Power and Energy in Integrated Circuits 

Energy is the biggest challenege facing the computer designer for all classes of computers. 

We have to worry about power being brought in and distributed properly and then then removing the heat produced. 

### Power and Energy: A Systems Perspective 

1) What is the max power a processor ever requires? 
2) What is the sustained power consumption? 
3) Consider energy and energy consumption.

To see what processor is more efficient a better comparison is energy consumption (not power) for executing the task. 

### Energy and Power within a Microprocessor

As we move from one process to the next, the increase in the number of transistors switching and the frequency with which they change dominate the decrease in load capacitance and voltage, leading to an overall growth in power consumption and energy. 

The problem here is that we must dissipate heat from a chip that is about 1.5cm on a side, we can't cool things with air and we've been stuck for nearly a decade. 

Distributing power and removing heat has become increasingly difficuly. 

Energy has been a major constraint to using transistors, in the past it was raw silicon area. 

There is however good news in the microprocessor world, where we can improve energy efficenty despite flat clock rates and constant supply voltages. 

1) Do nothing well; - turn off activity
2) Dynamic voltage-frequency scaling (DVFS); - basically profiling 
3) Design for the typical case; - More of laptops or PMDs for low power modes 
4) Overclocking; - Running at higher clock rates for a short time, until temperature start to rise

We can use race-to-halt strategy where we use a faster, less energy-efficient processor to all the rest of the system to go into sleep mode. 

Energy has become such a concern that the primiary evaluation now is tasks per joul or performance per wattage. 

### The Shift in Computer Architecture due to Limits of Energy 

Dark Silicon - this is a phenonmenon where you have so many transistors where they can't be turned on all at the same time due to thermal constraints. 

A small SRAM is 125 times more energy-efficent than DRAM, so the use of caches and memory buffers are important. 

Minimizing energy per taks comvined with the relative energyt and area costs opens new reserach endevors.

