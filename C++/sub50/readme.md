### Program memory map revisited
Lot's of programs running on our OS, We can quickly run out of memory
### Virtual Memory
A trick that fools your program into thinking it is the only program running on your OS, and all memory resources belong to it
Each program is abstracted into a process, and each process has access to the memory range 0~(2^N)-1) Where N is 32 on 32 bit systems and 64 on 64 bit systems.
`Real memory RAM` | `Virtual memory(2^N)-1`
The entire program is not loaded in real memory by the CPU and MMU, Only parts that are about to be excuted are loaded. Making effective use of real memory, a valuable and lacking resource.
**Virtual memory**
The memory map is a standard format defined by the OS, All programs wirrten for that OS must conform to it. It is usually divied into some sections 

|Name|Description|
|---|---|
|System|---|
|`Stack`|local variables,function calls,...|
|`Heap`|Additional memory that can be queried for at run time|
|Data||
|Text||