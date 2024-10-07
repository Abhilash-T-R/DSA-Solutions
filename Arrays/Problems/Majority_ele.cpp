#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] ={1,2,3,4,5};
    int n = 5;
    int targetCount = n/2;
    //naive approach --> O(n*n)
    // for(int i=0;i<n;i++)
    // {
    //     int icount = 1;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i] == arr[j])
    //         {
    //             icount++;
    //         }
    //     }
    //     if(icount > targetCount)
    //         {
    //             cout<<arr[i]<<" ";
    //             break;
    //         }
    // }
    //optimal --> sorting O(nlogn)
    // sort(arr,arr+n);
    // int freq = 1, ans = arr[0];
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i] == arr[i-1])
    //         freq++;
    //     else{
    //         freq = 1;
    //         ans = arr[i];
    //     }
    //     if(freq > targetCount)
    //     {
    //         cout<<arr[i]<<" ";
    //         break;
    //     }
    // }
    //moore's voting algorithm ---> O(n)
    int freq = 0, ans = 0;
    for(int i=0;i<n;i++)
    {
        if(freq == 0)
            ans = arr[i];
        if(arr[i] == ans)
            freq++;
        else
            freq--;
    }
    int count = 0;
    for(int ele : arr){
        if(ele == ans)
        {
            count++;
        }
    }
    if(count > targetCount)
        cout<<ans<<" ";
    else
     cout<<"No majority element"<<endl;
    return 0;
}