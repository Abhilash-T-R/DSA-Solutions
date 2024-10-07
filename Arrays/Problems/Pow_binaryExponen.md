# Power Calculation in C++

This file contains a solution for calculating the power of a number using the exponentiation by squaring method. The function handles various cases, including negative and zero exponents.

## Table of Contents
1. [Algorithm Explanation](#algorithm-explanation)
2. [Implementation](#implementation)

---

### Algorithm Explanation
The algorithm calculates \( x^n \) efficiently using the following rules:
- If \( n \) is 0, return 1 (any number raised to the power of 0 is 1).
- If \( x \) is 0, return 0 (0 raised to any positive power is 0).
- If \( x \) is 1, return 1 (1 raised to any power is 1).
- If \( x \) is negative and \( n \) is even, return 1 (the result will be positive).
- If \( x \) is negative and \( n \) is odd, return -1 (the result will be negative).

For any other case, the exponentiation by squaring technique is applied, which reduces the time complexity to O(log n).

### Implementation
```cpp
#include<iostream>
using namespace std;

int main()
{
    double x = 3; // Base
    int n = -1;   // Exponent

    if(n == 0) return 1; // Any number to the power of 0 is 1
    if(x == 0) return 0; // 0 raised to any positive power is 0
    if(x == 1) return 1; // 1 raised to any power is 1
    if(x < 0 && n % 2 == 0) return 1; // Negative base with even exponent is positive
    if(x < 0 && n % 2 != 0) return -1; // Negative base with odd exponent is negative

    long binform = n; // To handle negative exponents
    if(n < 0)
    {
        x = 1/x; // Invert the base
        binform = -binform; // Make exponent positive
    }

    double ans = 1;
    while(binform > 0)
    {
        if(binform % 2 == 1)
        {
            ans *= x; // If exponent is odd, multiply the current base
        }
        x *= x; // Square the base
        binform /= 2; // Halve the exponent
    }
    
    cout << ans << endl; // Output the result
    return 0;
}
