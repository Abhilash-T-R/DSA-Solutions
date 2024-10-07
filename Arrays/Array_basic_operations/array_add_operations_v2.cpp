/*
Sample Problem: 
Consider an array of size N with all initial values as 0. 
Perform given 'm' add operations from index 'a' to 'b' and evaluate highest element in array. 
An add operation adds 100 to all elements from index a to b (both inclusive).
Example:
Input : n = 5 // We consider array {0, 0, 0, 0, 0}
        m = 3.
        a = 2, b = 4.
        a = 1, b = 3.
        a = 1, b = 2.
Output : 300
*/
#include<iostream>
using namespace std;
int prefix_sum[100];
void calculate_PS(int arr[],int n)
{
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i] = arr[i]+prefix_sum[i-1];
    }
}
void getlargest(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    cout<<"max = "<<max<<endl;
}
void m_addOperations(int arr[],int n,int m)
{
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        arr[a] += 100;
        arr[b+1] -= 100;
    }
    calculate_PS(arr,n);
    getlargest(prefix_sum,n);
}
int main()
{
    int arr[]={0,0,0,0,0};
    m_addOperations(arr,5,3);
    return 0;
}