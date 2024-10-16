#include<iostream>
using namespace std;
int main()
{
    int a[]={1,1,3,3,3};
    int b[]={1,1,1,1,3,5,7};
    int m = 5, n = 7;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;}
        else if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;}
        else{
            cout<<a[i]<<" ";
            i++;j++;
        }
    }
    while(i<m)
    {
        if(i>0 && a[i]!=a[i-1])
        {
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(j<n)
    {
        if(j>0 && b[j]!=b[j-1])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    return 0;
}
