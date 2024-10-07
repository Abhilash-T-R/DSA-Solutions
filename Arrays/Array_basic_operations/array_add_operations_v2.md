# Array Add Operations Version 2 in C++

This file contains a solution to the problem of performing multiple add operations on an array initialized with zeros. Each operation adds a fixed value to a specified range of indices, and the program then evaluates the highest element in the array after all operations.

## Table of Contents
1. [calculate_PS](#calculate_PS)
2. [getlargest](#getlargest)
3. [m_addOperations](#m_addOperations)

---

### 1. calculate_PS
**Description**: This function calculates the prefix sum array, which allows efficient computation of cumulative sums for the given array. The prefix sum at each index `i` contains the sum of all elements from the start of the array to index `i`.

```cpp
void calculate_PS(int arr[], int n);

2. getlargest
Description: This function finds and prints the largest element in the provided array. It iterates through the array to determine the maximum value.

3. m_addOperations
Description: This function performs m add operations on the array, each operation adding 100 to all elements in the specified range from index a to b (inclusive). It utilizes a technique to apply the increments efficiently and then calculates the prefix sum to determine the highest value in the array.

