#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int CountAndMerge(int arr[],int l,int m,int h)
{
    int n1 = m-l+1;
    int n2 = h-m;
    vector<int> left(n1),right(n2);
    for(int i=0;i<n1;i++)
        left[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        right[i] = arr[m+1+i];
    int i=0,j=0,k=l,res=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else{
            arr[k++]=right[j++];
            res = res + (n1-i);
        }
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
    return res;

}
int countInv(int arr[],int low,int high)
{
    int res=0;
    if(high > low)
    {
        int mid = low + (high-low)/2;
        res += countInv(arr,low,mid);
        res += countInv(arr,mid+1,high);
        res += CountAndMerge(arr,low,mid,high);
    }
    return res;
}
int main()
{
    int arr[] = {2,4,1,3,5};
    cout<<countInv(arr,0,5)<<endl;
    return 0;
}