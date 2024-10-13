#include<iostream>
#include<algorithm>
using namespace std;
void bubble_sort(int arr[],const int &n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}
int main()
{
    int arr[] = {2,10,4,7},n=4;
    bubble_sort(arr,n);
    for(int ele:arr)
        cout<<ele<<" ";
    return 0;
}