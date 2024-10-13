# Selection Sort Implementation in C++

This repository contains an implementation of the **Selection Sort** algorithm in C++. The selection sort algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the array and places it at the beginning.

## Features
- Sorts an array of integers in ascending order.
- Simple and easy-to-understand implementation of the selection sort algorithm.
- Written in C++ for learning and educational purposes.

## Code Explanation
### `selection_sort` Function:
- The `selection_sort` function works by:
  - Iterating through the array from the beginning.
  - For each element, finding the minimum element in the remaining unsorted part of the array.
  - Swapping the found minimum element with the first unsorted element.
  
- It ensures that after each iteration, the left portion of the array is sorted, and the smallest elements are progressively placed in their correct positions.

### Time Complexity
- **Best, Average, and Worst Case**: O(n²)
- The time complexity remains O(n²) for all cases because the algorithm always makes the same number of comparisons.

### Space Complexity
- O(1) (in-place sorting algorithm)
