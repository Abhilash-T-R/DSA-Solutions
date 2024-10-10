#include<iostream>
#include<algorithm>
using namespace std;
static int mini,maxi;
void findMinmax(int arr[],int n)
{
    mini=arr[0],maxi=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
            maxi = arr[i];
        else
            mini = arr[i];
    }
}
bool isValid(int arr[],int n,int c,int mid)
{
    sort(arr,arr+n);
    int cows = 1, lasPos = arr[0];
    for(int i=1;i<n;i++)
    {
        if((arr[i]-lasPos)>=mid)
        {
            cows++;
            lasPos = arr[i];
        }
        if(cows == c)
            return true;
    }
    return false;
}
int main()
{
    int arr[] = {1,2,8,4,9};
    int n = 5, c = 3;
    findMinmax(arr,5);
    int low = 1, high = maxi-mini,ans=-1,mid;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(isValid(arr,n,c,mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout<<ans<<" ";
    return 0;
}
