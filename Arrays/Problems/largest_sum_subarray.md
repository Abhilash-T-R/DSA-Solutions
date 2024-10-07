# Largest Sum Subarray in C++

This file contains a solution for finding the subarray within a given array of integers (both positive and negative) that has the maximum sum.

## Table of Contents
1. [Lss](#Lss)

---

### 1. Lss
**Description**: This function implements Kadane’s algorithm to find the largest sum of any contiguous subarray within the given array. It iterates through the array, calculating the maximum sum ending at each position and updating the overall maximum sum found.

```cpp
int Lss(int arr[], int n);
