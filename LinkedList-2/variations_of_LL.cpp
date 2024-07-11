/*
Variations of LinkedList:
    -> Singly linked list
    -> Doubly linked list
    -> Circular linked list
    -> Circular Doubly linked list
*/

// For a Doubly Linked list
// advanatge: lets us traverse in both the directions
// disadvanatge: occupies too much memory(4+8+8 = 20 bytes)
class Node{
public:
    int data;
    Node *next;
    Node *prev    
};

// Circular Singly Linked List
// advantage: no need to maintain a head pointer
// disadvantage: not possible to traverse in both the directions

// Circular Doubly Linked List
// disadvantage: too much memory consumption(4+8+8+8 = 28 bytes)
// advantage: 