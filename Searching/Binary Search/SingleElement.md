# Find the Element That Appears Once in a Sorted Array

## Problem Statement
Given a sorted array consisting of integers where every element appears exactly twice, except for one element which appears exactly once. We need to find and return the index of that unique element.

### Example:
**Input:**  
arr[] = {1, 1, 2, 2, 3, 4, 4, 8, 8}

(The element `3` appears once at index `4`.)

## Explanation of the Code
The code uses a binary search approach to find the unique element in the sorted array. Here's how it works:

1. **Initialization:** It initializes `low` to `0`, `high` to `n-1`, and calculates `mid` during each iteration of the loop.

2. **Boundary Cases:** 
   - It checks if the first or the last element is unique (i.e., not equal to its neighbor).

3. **Finding the Unique Element:**
   - If `arr[mid]` is different from both `arr[mid - 1]` and `arr[mid + 1]`, then `arr[mid]` is the unique element, and its index is printed.
   - The algorithm determines whether to search the left or right half based on the parity of `mid` and the values of the neighboring elements. 

4. **Time Complexity:** The algorithm runs in O(log n) time due to the binary search mechanism.
