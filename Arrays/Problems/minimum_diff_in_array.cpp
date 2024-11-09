#include<iostream>
#include<algorithm>
using namespace std;
int minDiff(int arr[],int n)
{
    sort(arr,arr+n);
    int res = INT_MAX;
    for(int i=1;i<n;i++)
        res = min(res, (arr[i]-arr[i-1]));
    return res;
}
int main()
{
    int arr[] = {10,3,20,12};
    cout<<minDiff(arr,4)<<endl;
    return 0;
}