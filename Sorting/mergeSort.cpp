#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void merge(int arr[],int l,int m,int h)
{
    int n1 = m-l+1;
    int n2 = h-m;
    vector<int> left(n1),right(n2);
    for(int i=0;i<n1;i++)
        left[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        right[i] = arr[m+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];

}
void merge_sort(int arr[],int low,int high)
{
    if(high > low)
    {
        int mid = low + (high-low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[] = {3,5,0,12,-1,15,13};
    int n = 7;
    merge_sort(arr,0,n-1);
    for(int a:arr)
        cout<<a<<" ";
    return 0;
}