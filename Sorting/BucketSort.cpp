#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxElement(int arr[],int n)
{
    int max = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}
void bucketSort(int arr[],int n,int k)
{
    int maxele = maxElement(arr,n);
    maxele++;
    vector<vector<int>> bkt(k);
    for(int i=0;i<n;i++)
    {
        int bi = (k*arr[i])/maxele;
        bkt[bi].push_back(arr[i]);
    }
    for(int i=0;i<k;i++)
        sort(bkt[i].begin(),bkt[i].end());
    int index = 0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
            arr[index++] = bkt[i][j];
    }
}
int main()
{
    int arr[] = {30,40,10,80,5,12,70};
    bucketSort(arr,7,4);
    for(int e : arr)
        cout<<e<<" ";
    return 0;
}