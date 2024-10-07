# Product Array in C++

This file contains a solution for creating an output array such that each element at index `i` is equal to the product of all the elements of the input array except for `nums[i]`. The solution avoids the use of the division operator.

## Table of Contents
1. [Algorithm Explanation](#algorithm-explanation)
2. [Implementation](#implementation)

---

### Algorithm Explanation
The algorithm calculates the product array in two passes:
1. **First Pass (Prefix Product)**: Calculate the product of all elements to the left of each index and store it in the `ans` array.
2. **Second Pass (Suffix Product)**: Calculate the product of all elements to the right of each index and multiply it with the corresponding value in the `ans` array.

This approach ensures that each element in `ans` contains the product of all elements in `nums` except itself, while maintaining a time complexity of O(n) and a space complexity of O(n).

### Implementation
```cpp
#include<iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4}; // Input array
    const int n = 4;           // Size of the array

    // Optimal approach ---> O(n)
    int ans[n];                // Output array
    int suffix = 1;            // To hold the product of elements to the right

    ans[0] = 1;                // No elements to the left of the first element
    for(int i = 1; i < n; i++)
    {
        ans[i] = nums[i - 1] * ans[i - 1]; // Compute prefix product
    }
    
    for(int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1]; // Compute suffix product
        ans[i] *= suffix;      // Update ans with the suffix product
    }

    for(int ele : ans)         // Print the resulting array
        cout << ele << " ";
    cout << endl;

    return 0;
}
