# Data Structures and Algorithms

A collection of C++ implementations and laboratory exercises for basic data structures and algorithms.

## Repository Structure

| File | Lab | Description |
|------|-----|-------------|
| [`Lab_1/array_insertion.cpp`](Lab_1/array_insertion.cpp) | Lab 1 | Inserts `100` at index 2 of a fixed array by shifting elements to the right. |
| [`Lab_1/array_deletion.cpp`](Lab_1/array_deletion.cpp) | Lab 1 | Deletes an element at a user-entered index and shifts subsequent elements to the left. |
| [`Lab_1/array_searching.cpp`](Lab_1/array_searching.cpp) | Lab 1 | Searches a fixed array for the value `42` and prints its index if found. |
| [`Lab_2/SinglyLinkedList.cpp`](Lab_2/SinglyLinkedList.cpp) | Lab 2 | Creates five nodes in a singly linked list, traverses it, and prints the total node count. |
| [`Lab_3/DoublyLinkedList.cpp`](Lab_3/DoublyLinkedList.cpp) | Lab 3 | Creates five nodes in a doubly linked list and performs forward and backward traversal. |

## Lab 1: Array Operations

The Lab 1 programs demonstrate fundamental array operations using C++.

### Array Insertion

- Uses a fixed array containing `13, 45, 64, 89, 77, 88`.
- Inserts `100` at index `2`.
- Shifts elements to the right before placing the new value.
- Prints the array before and after insertion.

### Array Deletion

- Uses a fixed array of six elements.
- Accepts an index from the user.
- Rejects indices outside the range `0` to `size - 1`.
- Overwrites the deleted element by shifting subsequent elements left.

### Array Searching

- Uses the array `13, 24, 27, 42, 67`.
- Searches for the fixed value `42` using linear search.
- Prints the matching index.

## Lab 2: Singly Linked List

The singly linked list program:

- Defines a `Node` containing data and a `next` pointer.
- Creates five nodes dynamically.
- Reads values from the user.
- Links each node to the next node.
- Traverses the list until `NULL`.
- Counts and displays the total number of nodes.
- Releases dynamically allocated memory.

## Lab 3: Doubly Linked List

The doubly linked list program:

- Defines a `Node` containing data, a `prev` pointer, and a `next` pointer.
- Creates five nodes dynamically.
- Reads five values from the user.
- Links the nodes in both directions.
- Traverses the list from head to tail.
- Traverses the list backward from tail to head.
- Counts and displays the total number of nodes.
- Releases dynamically allocated memory.

## Compile and Run

Compile and run each program using `g++`:

```bash
# Lab 1: Array operations
g++ Lab_1/array_insertion.cpp -o array_insertion
./array_insertion

g++ Lab_1/array_deletion.cpp -o array_deletion
./array_deletion

g++ Lab_1/array_searching.cpp -o array_searching
./array_searching

# Lab 2: Singly linked list
g++ Lab_2/SinglyLinkedList.cpp -o singly_linked_list
./singly_linked_list

# Lab 3: Doubly linked list
g++ Lab_3/DoublyLinkedList.cpp -o doubly_linked_list
./doubly_linked_list
```

On Windows, run the generated executables with `.exe`, for example:

```bash
array_insertion.exe
array_deletion.exe
array_searching.exe
singly_linked_list.exe
doubly_linked_list.exe
```

## Concepts Covered

- Array insertion, deletion, and linear search
- Index validation
- Dynamic memory allocation
- Singly linked lists
- Doubly linked lists
- Forward and backward traversal
- Node counting
- Memory cleanup
- Basic pointer operations
- Basic time complexity:
  - Array insertion and deletion: `O(n)`
  - Linear search: `O(n)`
  - Linked-list traversal: `O(n)`

## Author

Misbah Khurshid
