# HotColdLinkedList
Doubly Linked List with contiguous hot nodes and cold storage nodes

Class Design for Optimized C++
The premise:
  Take in a bloated data structure, re-align data for cache-friendly layout
  Walk list to count, allocate an array (contiguous hot nodes)
  Initialize a hot/cold linked list with pointers back and forth
  
