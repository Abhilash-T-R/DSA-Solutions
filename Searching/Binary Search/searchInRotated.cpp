#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,5,6,7,0,1,2},target = 0,n = 7;
    int low = 0,high = n-1,mid;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(arr[mid] == target)
        {
            cout<<mid<<" ";
            break;
        }
        if(arr[low]<=arr[mid]) //left sorted
        {
            if(arr[low]<=target && target<=arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else{ //right sorted
            if(arr[mid]<=target && target<=arr[high])
                low = mid+1;
            else
                high = mid-1;
        }

    }
    return 0;
}
