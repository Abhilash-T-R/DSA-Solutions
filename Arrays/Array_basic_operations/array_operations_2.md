# Array Operations 2 in C++

This file contains implementations of algorithms for calculating the maximum sum of `k` consecutive elements (subarray) in an array and handling range queries using prefix sums.

## Table of Contents
1. [printarray](#printarray)
2. [naive_maxSum](#naive_maxSum)
3. [max_sum](#max_sum)
4. [calculate_PS](#calculate_PS)
5. [range_query](#range_query)

---

1. printarray
**Description**: This function prints all elements of the given array.

2. naive_maxSum
Description: This function finds the maximum sum of k consecutive elements in the array using a naive approach with a time complexity of O(n*k). It iterates over all possible starting points of the window and calculates the sum for each subarray.

3. max_sum
Description: This function calculates the maximum sum of k consecutive elements using a sliding window technique with a time complexity of O(n). It maintains a running sum of the current window and updates it by adding the next element and removing the first element of the previous window.

4. calculate_PS
Description: This function calculates the prefix sum array, where each element at index i contains the sum of the array elements from index 0 to i. This allows for efficient range queries.

5. range_query
Description: This function uses the prefix sum array to calculate and print the sum of the elements in the range [a, b]. It retrieves the sum in O(1) time using pre-calculated values from the prefix sum array.