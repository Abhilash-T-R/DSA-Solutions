# Insertion Sort Implementation in C++

This repository contains an implementation of the **Insertion Sort** algorithm using C++. The insertion sort algorithm sorts an array by building a sorted portion element by element.

## Features
- Sorts an array of integers in ascending order.
- Simple and easy-to-understand implementation of the insertion sort algorithm.
- Written in C++ for educational purposes.

## Code Explanation
The `insertion_sort` function works by:
- Iterating through the array, starting from the second element.
- Picking each element (`key`) and placing it into its correct position in the sorted subarray to its left.
- Shifting elements of the sorted subarray one position to the right if they are greater than the `key`.

### Time Complexity
- **Best Case**: O(n) (when the array is already sorted)
- **Average and Worst Case**: O(n²) (when the array is in reverse order)

### Space Complexity
- O(1) (in-place sorting algorithm)
