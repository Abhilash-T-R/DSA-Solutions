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
        if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;
        else{
            cout<<a[i]<<" ";
            i++;j++;
        }
    }
    return 0;
}
