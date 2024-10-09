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
    if(student > m)
        return false;
    else
        return true;
}
int main()
{
    int arr[] = {2,1,3,4};
    int n = 4, m =2;
    if(m>n)
    {
        cout<<"-1";
        return 0;
    }
    int low = 0, high = sum(arr,n),mid,ans=-1;
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
