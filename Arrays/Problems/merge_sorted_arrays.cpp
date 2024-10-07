#include<iostream>
using namespace std;
int a3[10];
void mergesorted(int a1[],int a2[],int m,int n)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n)
    {
        if(a1[i]<a2[j])
            a3[k++]=a1[i++];
        else
            a3[k++]=a2[j++];
    }
    while(i<m)
        a3[k++] = a1[i++];
    while(j<n)
        a3[k++] = a2[j++];
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int a1[] = {2,5,7,9,11};
    int a2[] = {3,5,10,12,15};
    mergesorted(a1,a2,5,5);
    printarray(a3,10);
    
    return 0;
}