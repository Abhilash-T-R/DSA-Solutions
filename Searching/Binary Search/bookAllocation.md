# Allocate Minimum Pages Problem

### Problem Statement:
You are given an array `arr[]` of size `n` where each element represents the number of pages in a book. There are `m` students, and the books need to be allocated in such a way that each student gets at least one book, and the maximum number of pages assigned to a student is minimized. Your task is to find the minimum number of pages.

### Approach:
The solution uses binary search to find the minimum maximum number of pages. The search space is the sum of all pages, and the objective is to distribute books such that the pages assigned to the student with the most pages is minimized.

### Functions:
1. `sum(arr[], n)`:
   - Calculates the total sum of elements in the array.

2. `isValid(arr[], n, m, mid)`:
   - Checks if it's possible to allocate the books to `m` students such that no student gets more than `mid` pages.

### Code:
```cpp
#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        s += arr[i];
    return s;
}

bool isValid(int arr[],int n,int m,int mid)
{
    int student = 1, pages = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > mid)
            return false;
        if((pages+arr[i])<=mid)
        {
            pages += arr[i];
        }
        else{
            student++;
            pages = arr[i];
        }
    }
    return student <= m;
}

int main()
{
    int arr[] = {2,1,3,4};
    int n = 4, m = 2;
    if(m>n)
    {
        cout<<"-1";
        return 0;
    }
    int low = 0, high = sum(arr,n), mid, ans = -1;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(isValid(arr,n,m,mid))
        {
            ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    cout<<ans<<" ";
    return 0;
}

Explanation:
Input: {2, 1, 3, 4} (book pages), m = 2 (number of students)
Output: 5 (The minimum maximum number of pages that can be assigned to a student is 5)
Time Complexity:
O(n * log(sum of pages)): This is due to the binary search applied on the range of possible page sums.
