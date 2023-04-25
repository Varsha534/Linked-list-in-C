# Linked-list-in-C

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the below image:

![image](https://user-images.githubusercontent.com/125336949/234397314-54540a6a-1e37-448f-b59b-666673f7a759.png)

A Linked List is a linear data structure which looks like a chain of nodes, where each node is a different element. Unlike Arrays, Linked List elements are not stored at a contiguous location. It is basically chains of nodes, each node contains information such as data and a pointer to the next node in the chain. In the linked list there is a head pointer, which points to the first element of the linked list, and if the list is empty then it simply points to null or nothing.

- Types of linked lists: 

There are mainly three types of linked lists:

1] Single-linked list
2] Double linked list
3] Circular linked list

- Singly-linked list
A singly linked list is a linear data structure in which the elements are not stored in contiguous memory locations and each element is connected only to its next element using a pointer. Traversal of items can be done in the forward direction only due to the linking of every node to its next node.


![image](https://user-images.githubusercontent.com/125336949/234398044-58ecf698-f725-4c7b-8a45-66ddcf7df7bf.png)

# Advantages of Linked Lists over arrays:
- Dynamic Array.
- Ease of Insertion/Deletion.
- Insertion at the beginning is a constant time operation and takes O(1) time, as compared to arrays where inserting an element at the beginning takes O(n) time,where n is the number of elements in the array.

# Drawbacks of Linked Lists: 
-Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do a binary search with linked lists efficiently with its default implementation. 
- Extra memory space for a pointer is required with each element of the list. 
- Not cache-friendly. Since array elements are contiguous locations, there is the locality of reference which is not there in the case of linked lists.
- It takes a lot of time in traversing and changing the pointers.
- Reverse traversing is not possible in singly linked lists.
- It will be confusing when we work with pointers.
- Direct access to an element is not possible in a linked list as in an array by index.
- Searching for an element is costly and requires O(n) time complexity.
- Sorting of linked lists is very complex and costly.
- Appending an element to a linked list is a costly operation, and takes O(n) time, where n is the number of elements in the linked list, as compared to arrays that take O(1) time.
