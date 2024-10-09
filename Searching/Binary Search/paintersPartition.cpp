#include<iostream>
using namespace std;
int Max(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
            m = arr[i];
    }
    return m;
}
int Sum(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
        s += arr[i];
    return s;
}
bool isValid(int arr[],int n,int m,int mid)
{
    int p = 1,time = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid)
            return false;
        if((arr[i]+time)<=mid)
        {
            time += arr[i];
        }
        else{
            p++;
            time = arr[i];
        }
    }
    if(p>m)
        return false;
    else
        return true;
}
int main()
{
    int arr[] = {40,30,10,20};
    int m = 2,n=4;
    int low = Max(arr,n);
    int high = Sum(arr,n);
    int mid, ans = -1;
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
