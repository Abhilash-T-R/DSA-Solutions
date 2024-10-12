# Rope Cutting Problem

This program solves the "Rope Cutting Problem" using recursion. The goal is to cut a rope of length `n` into the maximum number of pieces, where the allowed lengths for each cut are `a`, `b`, and `c`.

## Problem Description

Given:
- A rope of length `n`.
- Three possible lengths (`a`, `b`, `c`) for each piece that you can cut.

The task is to find the maximum number of pieces the rope can be cut into using the given lengths. If it's not possible to cut the rope, the program returns `-1`.

### Example

```cpp
int n = 5, a = 2, b = 5, c = 1;

Algorithm
Base Case:

If n == 0, return 0 since no more pieces can be made.
If n < 0, return -1 as it's impossible to cut the rope further.
Recursive Case:

For each possible cut (a, b, c), recursively call the function for the remaining length (n - a, n - b, n - c).
Find the maximum number of pieces that can be obtained by taking the maximum result from the three recursive calls.
Result:

If the maximum number of pieces is -1, it means it's not possible to cut the rope into the desired lengths, so return -1.
Otherwise, return the maximum number of pieces plus 1 to account for the current cut.
Key Function
maxPieces(n, a, b, c): A recursive function that calculates the maximum number of pieces the rope can be cut into.
Time Complexity
The time complexity of this recursive solution is exponential, O(3^n), due to the recursive exploration of all possible cuts. However, it provides an optimal solution to the problem.


Explanation
Base cases:
When the remaining length of the rope n is 0, it returns 0 since no more cuts can be made.
If n becomes negative, it returns -1 because it's impossible to cut the rope into the specified lengths.
Recursive logic:
The function tries to cut the rope by length a, b, and c, and recursively calculates the maximum pieces for the remaining length. It uses the standard std::max function to find the maximum number of cuts possible for each recursive call.
Conclusion
The program provides an efficient way to determine the maximum number of pieces the rope can be cut into using recursive calls. It's a straightforward and effective solution to the rope cutting problem, ideal for small inputs but could be optimized using dynamic programming for larger inputs.
