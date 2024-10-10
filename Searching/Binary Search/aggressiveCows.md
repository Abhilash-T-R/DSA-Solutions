# Aggressive Cows Problem

This program solves the "Aggressive Cows Problem" using binary search and greedy algorithms. The goal is to place `c` cows in `n` stalls such that the minimum distance between any two cows is maximized.

## Problem Description

Given:
- `arr[]` which represents the positions of the stalls.
- `n` is the number of stalls.
- `c` is the number of cows.

The objective is to place the cows in the stalls such that the minimum distance between any two cows is as large as possible.

### Example

```cpp
int arr[] = {1, 2, 8, 4, 9};
int n = 5, c = 3;

Algorithm
Find Min and Max Positions: The program first finds the minimum and maximum positions in the array.

Binary Search: It then uses binary search to find the largest minimum distance between the cows. The search space is from 1 to max(arr) - min(arr).

Greedy Placement: The isValid function is used to check if it's possible to place the cows with at least the mid distance between them.

Optimization: The binary search optimizes the result by checking the middle point in each iteration and updating the range based on the validity of cow placement.

Key Functions
findMinmax(): Finds the minimum and maximum values in the array.
isValid(): Determines whether the cows can be placed such that the minimum distance between them is greater than or equal to mid.
Time Complexity
Sorting the stalls takes O(n log n).
The binary search runs in O(log(max(arr) - min(arr))).
Hence, the overall time complexity is O(n log n).

Conclusion
The program efficiently solves the problem using binary search combined with greedy placement, ensuring optimal placement of cows to maximize the minimum distance between them.
