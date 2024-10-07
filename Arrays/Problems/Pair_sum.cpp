#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,7,11};
    int n = 4;
    int targetsum = 13;
    //naive solution O(n*n)
    // for(int i=0;i<(n-1);i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if((arr[i]+arr[j]) == targetsum)
    //         {
    //             cout<<i<<" "<<j<<" ";
    //             break;
    //         }
    //     }
    // }
    //optimal two pointer ---> O(n) array has to be sorted
    int start = 0, end = n-1;
    while(start<end)
    {
        if((arr[start]+arr[end])>targetsum)
            end--;
        else if((arr[start]+arr[end])<targetsum)
            start++;
        else{
            cout<<start<<" "<<end<<" ";
            break;}

    }
    return 0;
}