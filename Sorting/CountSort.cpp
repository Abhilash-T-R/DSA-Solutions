#include<iostream>
#include<vector>
using namespace std;
void CountSort(int arr[],int n,int k)
{
    vector<int> count(k,0);
    vector<int> result(n,0);
    for(int i=0;i<n;i++)
        count[arr[i]]++;
    for(int i=1;i<k;i++)
        count[i] = count[i-1]+count[i];
    for(int i=n-1;i>=0;i--)
    {
        result[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
        arr[i] = result[i];
}
int main()
{
    int arr[] = {1,4,4,1,0,1,2,5};
    CountSort(arr,8,6);
    for(int e : arr)
        cout<<e<<" ";
    return 0;
}