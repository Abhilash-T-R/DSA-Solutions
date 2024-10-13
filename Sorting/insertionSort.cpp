#include<iostream>
using namespace std;
void insertion_sort(int arr[],const int &n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[] = {10,9,0,1,5},n=5;
    insertion_sort(arr,n);
    for(int e:arr)
        cout<<e<<" ";   
    return 0;
}