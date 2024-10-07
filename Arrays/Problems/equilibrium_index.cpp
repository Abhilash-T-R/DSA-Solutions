#include<iostream>
using namespace std;
//Equilibrium index of an array
/*
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 
We are given an Array of integers, We have to find out the first index i from left such that -
A[0] + A[1] + ... A[i-1] = A[i+1] + A[i+2] ... A[n-1]
Input
[-7, 1, 5, 2, -4, 3, 0]
Output
3
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
*/
//naive - O(n*n)
int equilibrium(int arr[], int n) 
{
    for(int i=0; i<n; i++)
    {
        int leftsum = 0;
        for(int j=0; j<i; j++)
            leftsum += arr[j];
        
        int rightsum = 0;
        for(int j=i+1; j<n; j++)
            rightsum += arr[j];
        
        if(leftsum == rightsum)
            return i;
    }
    return -1; // return -1 if no equilibrium index is found
}
//efficient - O(n)
int equilibrium_index(int arr[],int n)
{
    int sum,leftsum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    for(int i=0;i<n;i++)
    {
        sum-=arr[i];
        if(sum == leftsum)
            return i;
        leftsum+=arr[i];
    }
    return -1;
}
int main()
{
    int arr[] = {-7,1,5,2,-4,3,0};
    cout<<"equilibrium index: "<<equilibrium_index(arr,7)<<endl;
    return 0;
}