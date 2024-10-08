# Rotated Sorted Array Search

This program performs a binary search on a rotated sorted array to find a target element.

## Problem Description
Given a sorted array that has been rotated at an unknown pivot, the task is to find the index of a target element. If the target exists, return its index; otherwise, indicate that the target is not found.

### Example:
```cpp
Input: arr[] = {4,5,6,7,0,1,2}, target = 0
Output: 4

Approach:
Binary Search: This algorithm utilizes binary search to find the target, even though the array has been rotated.
Left or Right Sorted Check: In each iteration, we determine whether the left or right half of the array is sorted and adjust the search range accordingly.
Time Complexity: O(log n) because we are effectively dividing the search space in half at each step.

The array may have been rotated, but the binary search is still applicable by determining which half of the array is sorted.
This solution provides O(log n) time complexity, making it efficient for large arrays.
