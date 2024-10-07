#include<iostream>
using namespace std;
int prefix_sum[100];
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
//sliding window technique - finding max sum of k consecutive elements(subarray) in array
//naive solution O(n*k)
int naive_maxSum(int arr[], int n, int k) 
{
    int max_sum = 0;
    for(int i=0;i<=(n-k);i++)
    {
        int window_sum=0;
        for(int j=i;j<(i+k);j++)
        {
            window_sum += arr[j];
        }
        max_sum = max(window_sum,max_sum);
    }
    return max_sum;
}
//efficient approach O(n)
int max_sum(int arr[],int n,int k)
{
    int window_sum=0;
    for(int i=0;i<k;i++)
        window_sum+=arr[i];
    int max_sum = window_sum;
    for(int j=k;j<n;j++)
    {
        window_sum += (arr[j]-arr[j-k]);
        max_sum = max(window_sum,max_sum);
    }
    return max_sum;
}
// for(int i=0;i<k;i++)
// {
//         winsum += arr[i];
// }
// maxsum = winsum;
// for(int i=1;i<=(n-k);i++)
// {
//         winsum = winsum-arr[i-1]+arr[i+k-1];
//         maxsum = max(winsum,maxsum);
// }

//prefix sum array
void calculate_PS(int arr[],int n)
{
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i] = arr[i]+prefix_sum[i-1];
    }
}
void range_query(int arr[],int n,int a,int b)
{
    calculate_PS(arr,n);
    if(a == 0)
        cout<<prefix_sum[b]<<endl;
    else
        cout<<(prefix_sum[b]-prefix_sum[a-1])<<endl;
}
int main()
{
    int arr[4] = {100,200,300,400};
    //cout<<max_sum(arr,4,2)<<endl;
    cout<<naive_maxSum(arr,4,2)<<endl;
    printarray(arr,4);
    range_query(arr,4,0,2);
    return 0;
}