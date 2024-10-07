# Maximum Area Container in C++

This file contains a solution for finding the maximum area of a container that can be formed by two lines in a given array of heights.

## Table of Contents
1. [Main Function Logic](#main-function-logic)

---

### Main Function Logic
**Description**: This program calculates the maximum area of water that can be contained between two heights in an array. It uses a two-pointer approach to efficiently find the maximum area.

Logic:
Two pointers (left and right) are initialized at the beginning and end of the array.
The area is calculated using the width (distance between pointers) and height (minimum of the two heights at the pointers).
The maximum area found so far is updated.
The pointer corresponding to the shorter height is moved inward, as moving the shorter line may potentially yield a taller line and a larger area.
