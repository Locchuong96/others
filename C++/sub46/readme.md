### Bounds of an array

- Reading beyond bounds will read garbage or crash your program.

- Write beyond bounds, The compiler allows it, but you down own it, so other programs may modify it and your program may read bogus data at a later time. Or you can event corrupt data used by other parts of your program.