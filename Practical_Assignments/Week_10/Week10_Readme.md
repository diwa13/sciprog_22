Week 10:

Compile: 

gcc Tower_of_Hanoi.c -o Tower_of_Hanoi -lm

Run: 

./Tower_of_Hanoi

The Tower of Hanoi is a puzzle game that we worked out this week.

One disk at a time can only be moved.

The topmost disk from one of the rods is taken from one move and slipped onto the other rod on top of any other disks that may already be on that rod.

A larger disk cannot be stacked on a smaller disk.

The disc only has to be moved from rod 1 to rod 3 if n = 1.

If n > 1, then we wish to relocate n-1 discs from rods 1 and 2 (using rod 3 as an intermediary), leaving disc n on rod 1 alone. From rod 1 to rod 3, move that disc. Finally, transfer the n-1 discs from rod 2 to rod 3 by passing them through rod 1.