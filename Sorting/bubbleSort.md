# Bubble Sort Implementation in C++

This repository contains an implementation of the **Bubble Sort** algorithm using C++. The bubble sort algorithm sorts an array by repeatedly swapping adjacent elements if they are in the wrong order.

## Features
- Sorts an array of integers in ascending order.
- Optimized with a flag to stop the algorithm early if the array is already sorted.
- Written in C++ for learning and educational purposes.

## Code Explanation
The `bubble_sort` function takes an array of integers and sorts it in-place using the following logic:
- It iterates through the array multiple times.
- On each pass, it swaps adjacent elements if they are out of order.
- It uses a flag (`swapped`) to check if the array is already sorted, stopping early for efficiency.

### Time Complexity
- **Best Case**: O(n) (when the array is already sorted)
- **Average and Worst Case**: O(n²) (when the array is completely unsorted)

### Space Complexity
- O(1) (in-place sorting algorithm)

## How to Run the Code
### Prerequisites:
You need a C++ compiler (such as GCC or Clang) to compile and run the program.

### Steps:
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/bubble-sort.git
