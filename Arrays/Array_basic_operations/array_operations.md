# Array Operations in C++

This file contains various operations that can be performed on arrays, such as finding the largest element, checking if the array is sorted, rotating elements, removing duplicates, and moving zeroes to the end.

## Table of Contents
1. [swap](#swap)
2. [getlargest](#getlargest)
3. [issorted](#issorted)
4. [secondLargest](#secondLargest)
5. [reverse](#reverse)
6. [reverse2](#reverse2)
7. [removeduplicates](#removeduplicates)
8. [leftrotatebyOne](#leftrotatebyOne)
9. [leftrotatebyD](#leftrotatebyD)
10. [leftrotatebyD2](#leftrotatebyD2)
11. [leftrotatebyD3](#leftrotatebyD3)
12. [movezeroestoend](#movezeroestoend)

---
1. swap
This function takes two integers by reference and swaps their values using a temporary variable. It effectively allows you to exchange the contents of two variables without returning any value.

2. getlargest
This function iterates through an array to find and print the largest element. It initializes max with the first element and compares it with the rest to determine the largest value.

3. issorted
This function checks if the array is sorted either in increasing or decreasing order. It uses two boolean flags, increasing and decreasing, to track the order as it iterates through the array.

4. secondLargest
This function finds the second largest element in the array by keeping track of the largest (l) and second largest (sl) indices. It updates these indices based on comparisons with the current element, ensuring the correct second largest is identified.

5. reverse
This function reverses the entire array in place by swapping elements from the start and end towards the center. It uses a while loop to repeatedly swap elements until the low index meets or exceeds the high index.

6. reverse2
This function reverses a portion of the array between specified indices low and high. It employs the same swapping logic as the reverse function, allowing for reversing any segment of the array.

7. removeduplicates
This function removes duplicate elements from the array while preserving the order of non-duplicate elements. It uses a single pass to compare each element with the last unique element and updates the size of the array accordingly.

8. leftrotatebyOne
This function rotates the array elements to the left by one position, moving the first element to the end. It shifts each element one position to the left and places the first element in the last position of the array.

9. leftrotatebyD
This function rotates the array to the left by d positions using a naive approach, calling the leftrotatebyOne function d times. It effectively shifts each element left multiple times, which may not be efficient for large d.

10. leftrotatebyD2
This function rotates the array to the left by d positions using a temporary array to store the first d elements. It shifts the remaining elements left and then copies the stored elements back to the end of the original array.

11. leftrotatebyD3
This function implements the reversal algorithm to rotate the array left by d positions efficiently. It reverses three parts of the array: the first d elements, the remaining elements, and then the entire array to achieve the rotation.

12. movezeroestoend
This function moves all zero elements in the array to the end while maintaining the relative order of non-zero elements. It uses a counter to swap non-zero elements forward, effectively compacting them at the start of the array.
