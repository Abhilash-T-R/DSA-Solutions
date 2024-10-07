# Two Sum Problem in C++

This file contains a solution for the Two Sum problem, where we need to find two indices in a sorted array such that the sum of the elements at these indices equals a given target sum.

## Table of Contents
1. [Naive Approach](#naive-approach)
2. [Optimal Approach](#optimal-approach)

---

### Naive Approach
**Description**: The naive approach involves using nested loops to check each pair of elements in the array to find the target sum, resulting in O(n²) time complexity.

```cpp
// Naive solution O(n*n)
for(int i=0;i<(n-1);i++)
{
    for(int j=i+1;j<n;j++)
    {
        if((arr[i]+arr[j]) == targetsum)
        {
            cout<<i<<" "<<j<<" ";
            break;
        }
    }
}

Optimal Approach
Description: The optimal approach uses the two-pointer technique. This method assumes that the array is sorted and allows for a linear search with O(n) time complexity.

