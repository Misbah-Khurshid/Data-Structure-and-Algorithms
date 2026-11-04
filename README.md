# Data-Structure-and-Algorithms
# Lab 1: Array Operations in C++

This lab covers the three basic operations on arrays in C++: **insertion**, **deletion**, and **searching**.

## Files

| File | Description |
|------|-------------|
| `array_insertion.cpp` | Inserts an element at a given position by shifting the following elements one step to the right. |
| `array_deletion.cpp` | Deletes an element from a given index by shifting the following elements one step to the left. |
| `array_searching.cpp` | Searches for an element in the array and reports its position. |

## How Each Operation Works

### 1. Insertion
- Shift all elements from the target position one step right.
- Place the new value at the target position.
- Increase the array size by 1.

### 2. Deletion
- Check that the index is valid (`0` to `size - 1`).
- Shift all elements after the index one step left to overwrite the deleted element.
- Decrease the array size by 1.

### 3. Searching
- Go through the array and compare each element with the target value.
- Print the index if found, otherwise show a "not found" message.

## Compile and Run

```bash
g++ array_insertion.cpp -o insertion
./insertion

g++ array_deletion.cpp -o deletion
./deletion

g++ array_searching.cpp -o searching
./searching
```

On Windows, run the executables as `insertion.exe`, `deletion.exe`, and `searching.exe`.

## Sample Array Used

```
13, 45, 64, 89, 77, 88
```

## Concepts Covered
- Arrays and indexing
- Loops and element shifting
- Input validation (index bounds)
- Basic time complexity: insertion and deletion are O(n), searching is O(n) for linear search

## Author
Misbah Khurshid
