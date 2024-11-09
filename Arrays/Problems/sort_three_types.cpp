#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    int low = 0 , mid = 0, high = n-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
            mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[] = {1,2,0,0,1,1,2,0};
    sort(arr,8);
    for(int x : arr)
        cout<<x<<" ";
    return 0;
}