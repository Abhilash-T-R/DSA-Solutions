# Equilibrium Index in C++

This file contains a solution for finding the equilibrium index of an array. The equilibrium index is defined as the index at which the sum of elements at lower indices is equal to the sum of elements at higher indices.

## Table of Contents
1. [equilibrium](#equilibrium)
2. [equilibrium_index](#equilibrium_index)

---

### 1. equilibrium
**Description**: This function implements a naive approach to find the equilibrium index of an array with a time complexity of O(n²). It iterates through each index and calculates the sum of elements to the left and right of the current index, returning the index if the sums are equal.

```cpp
int equilibrium(int arr[], int n);

2. equilibrium_index
Description: This function finds the equilibrium index of an array using an efficient approach with a time complexity of O(n). It first calculates the total sum of the array, then iterates through the array while maintaining a left sum to check if the left sum equals the remaining sum on the right.

