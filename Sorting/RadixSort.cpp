#include<iostream>
#include<vector>
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
void CountSort(int arr[],int n,int exp)
{
    vector<int> count(10,0);
    vector<int> result(n,0);
    for(int i=0;i<n;i++)
        count[(arr[i]/exp)%10]++;
    for(int i=1;i<10;i++)
        count[i] = count[i-1]+count[i];
    for(int i=n-1;i>=0;i--)
    {
        result[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
        arr[i] = result[i];
}
void RadixSort(int arr[],int n)
{
    int maxele = maxElement(arr,n);
    for(int exp = 1 ; (maxele/exp)>0 ; exp *= 10)
    {
        CountSort(arr,n,exp);
    }
}
int main()
{
    int arr[] = {319,212,6,8,100,50,25,34};
    RadixSort(arr,8);
    for(int e : arr)
        cout<<e<<" ";
    return 0;
}