# Find Peak Element in Array

### Problem Statement:
Given an array, find a peak element. A peak element is an element that is greater than its neighbors. In this solution, the array is such that:

- Each element is unique.
- The first and last elements can't be peaks.

### Input:
```cpp
arr[] = {0, 3, 8, 9, 10, 2}

Algorithm Explanation:
Binary Search is used to find the peak element.
The algorithm checks the mid element:
If it’s a peak (i.e., greater than both its neighbors), it returns the index.
If the mid element is greater than its left neighbor, the search moves to the right half of the array.
Otherwise, the search moves to the left half.
The time complexity of this algorithm is O(log n) because of the binary search approach.
Complexity:
Time Complexity: O(log n)
Space Complexity: O(1)
