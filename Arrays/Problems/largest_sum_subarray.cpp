//Largest sum subarray
/*
We are given an array of positive and negative integers. We have to find the subarray having maximum sum.
Input
[-3, 4, -1, -2, 1, 5]
Output
7
(4+(-1)+(-2)+1+5)
*/
#include<iostream>
using namespace std;
int Lss(int arr[],int n)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for(int i=0;i<n;i++)
    {
        max_ending_here += arr[i];
        max_so_far = max(max_ending_here,max_so_far);
        if(max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main()
{
    int arr[] = {-3,4,-1,-2,1,5};
    cout<<"Largest sum : "<<Lss(arr,6);
    return 0;
}