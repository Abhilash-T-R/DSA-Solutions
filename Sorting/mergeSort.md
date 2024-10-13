# Merge Sort Implementation in C++

This repository contains an implementation of the **Merge Sort** algorithm using C++. Merge Sort is a divide-and-conquer algorithm that sorts an array by recursively splitting it in half and merging the sorted halves.

## Features
- Sorts an array of integers in ascending order.
- Efficient and stable sorting algorithm with a time complexity of O(n log n).
- Written in C++ with the use of `vector` for managing temporary subarrays.

## Code Explanation
### `merge` Function:
- The `merge` function is responsible for merging two sorted subarrays into a single sorted array.
- The two subarrays are stored temporarily in `left` and `right` vectors, and then merged back into the original array.
- The function ensures that elements are merged in sorted order by comparing the elements from `left` and `right`.

### `merge_sort` Function:
- This is the recursive function that splits the array into two halves.
- It continues to divide the array until subarrays of size 1 are obtained.
- After each division, the `merge` function is called to combine the sorted subarrays.

### Time Complexity
- **Worst Case**: O(n log n)
- **Best Case**: O(n log n)
- **Average Case**: O(n log n)

### Space Complexity
- O(n) (extra space required for temporary arrays `left` and `right`)

