# Finding the Majority Element in C++

This file contains a solution for finding the majority element in a given array. A majority element is an element that appears more than `n/2` times in the array.

## Table of Contents
1. [Naive Approach](#naive-approach)
2. [Optimal Approach](#optimal-approach)
3. [Moore's Voting Algorithm](#moores-voting-algorithm)

---

### Naive Approach
**Description**: The naive approach involves checking the count of each element using nested loops, resulting in O(n²) time complexity.

```cpp
// Naive approach --> O(n*n)
for(int i=0;i<n;i++)
{
    int icount = 1;
    for(int j=i+1;j<n;j++)
    {
        if(arr[i] == arr[j])
        {
            icount++;
        }
    }
    if(icount > targetCount)
    {
        cout<<arr[i]<<" ";
        break;
    }
}

Optimal Approach
Description: This approach involves sorting the array first, which has a time complexity of O(n log n). After sorting, the majority element can be found by counting the frequency of elements.

Moore's Voting Algorithm
Description: This is the most efficient approach with O(n) time complexity and O(1) space complexity. It involves using a voting mechanism to find a potential majority candidate.

