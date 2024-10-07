#include<iostream>
using namespace std;
int main()
{
    int nums[] = {1,2,3,4};
    const int n = 4;
    //brute force ---> O(n*n)  constraint - do not use division operator
    // int ans[n];
    // for(int &ele:ans)
    //     ele = 1;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i != j)
    //             ans[i] *= nums[j];
    //     }
    // }
    // for(int ele:ans)
    //     cout<<ele<<" ";
    //optimal approach ---> O(n)
    int ans[n];
    int suffix = 1;
    ans[0] = 1;
    for(int i=1;i<n;i++)
    {
        ans[i] = nums[i-1]*ans[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    for(int ele:ans)
        cout<<ele<<" ";
    cout<<endl;
    return 0;
}