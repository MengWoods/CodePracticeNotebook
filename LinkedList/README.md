# Linked List Data Structure

A linked list consists chains of nodes, each node contains a data field and a reference(list) to the next node. Elements in a linked list\
are not stored at a contiguous location like arrays.

Types of linked list are: Single-linked list, Double linked list, Circular linked list

## Advantages

1. Dynamic Data structure: The size of memory can be allocated or de-allocated at run time based on the operation insertion or deletion.
2. Ease of Insertion/Deletion: The insertion and deletion of elements are simpler than arrays since no elements need to be shifted after insertion and deletion, Just the address needed to be updated.
3. Efficient Memory Utilization: Linked List is a dynamic data structure the size increases or decreases as per the requirement so this avoids the wastage of memory. 
4. Implementation: Various advanced data structures can be implemented using a linked list like a stack, queue, graph, hash maps, etc.

## Disadvantages

1. Memory usage: The use of pointers is more in linked lists hence, complex and requires more memory.
2. Accessing a node: Random access is not possible due to dynamic memory allocation.
3. Search operation costly: Searching for an element is costly and requires O(n) time complexity.
4. Traversing in reverse order: Traversing is more time-consuming and reverse traversing is not possible in singly linked lists. 

## Applications

1. The list of songs in the music player is linked to the previous and next songs. 
2. In a web browser, previous and next web page URLs are linked through the previous and next buttons.
3. In the image viewer, the previous and next images are linked with the help of the previous and next buttons.
4. Switching between two applications is carried out by using “alt+tab” in windows and “cmd+tab” in mac book. It requires the functionality of a circular linked list.
5. In mobile phones, we save the contacts of people. The newly entered contact details will be placed at the correct alphabetical order. This can be achieved by a linked list to set contact at the correct alphabetical position.
6. The modifications that we made in the documents are actually created as nodes in doubly linked list. We can simply use the undo option by pressing Ctrl+Z to modify the contents. It is done by the functionality of a linked list.

## Representations

```C++
// A Single linked list node
class Node {
public:
	int data;
	Node* next;
};
```

```C++
/* Node of a doubly linked list */
class Node {
public:
	int data;
	Node* next; // Pointer to next node in DLL
	Node* prev; // Pointer to previous node in DLL
};
```

## Reference

- https://www.geeksforgeeks.org/data-structures/linked-list/