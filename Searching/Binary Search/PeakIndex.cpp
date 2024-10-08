#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,3,8,9,10,2};
    int n = 6;
    int low = 1, high = n-2,mid;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            cout<<mid<<" ";
            break;
        }
        if(arr[mid]>arr[mid-1])
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return 0;
}
