### When 'new' fails

In some rare cases, the 'new' operator will fail to allocate dynamic ememory from the heap, When that happens, and you have no mechanism in place to handle that failure, an exception will  be thrown and your program will crash, BAD!
`new` fails very rarely in practive and you will see many programs that assumse that it always works and don't check for memory allocation failure in any way. Depending on your application, failed memory allocations can be very bad and you need to check and handle them.

