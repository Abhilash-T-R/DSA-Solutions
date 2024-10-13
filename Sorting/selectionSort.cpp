#include<iostream>
#include<algorithm>
using namespace std;
void selection_sort(int arr[],const int &n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
                min_index = j;
        }
        swap(arr[min_index],arr[i]);
    }
}
int main()
{
    int arr[] = {2,1,4,7},n=4;
    selection_sort(arr,n);
    for(int ele:arr)
        cout<<ele<<" ";
    return 0;
}