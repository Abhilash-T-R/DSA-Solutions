#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
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
void issorted(int arr[],int n)
{
    bool increasing = true;
    bool decreasing = true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            decreasing=false;
        }
        else if(arr[i]<arr[i-1])
        {
            increasing=false;
        }
    }
    cout<<"sorted is : "<<(decreasing || increasing)<<endl;
}
void secondLargest(int arr[],int n)
{
    int sl=-1;
    int l=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[l])
        {
            sl = l;
            l = i;
        }
        else if(arr[i]!=arr[l])
        {
            if(sl == -1 || arr[i]>arr[sl])
            {
                sl = i;
            }
        }
    }
    if(sl > n-1 || sl < 0){
        sl = -1;
        cout<<sl<<endl;
    }
    else
        cout<<"The second largest element in the given array is : "<<arr[sl]<<endl;
}
void reverse(int arr[],int n)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void reverse2(int arr[],int n,int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void removeduplicates(int arr[],int &n)
{
    int pos=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] != arr[pos-1])
        {
            arr[pos]=arr[i];
            pos++;
        }
    }
    n = pos;
    cout<<"new size of array is : "<<n<<endl;
}
void leftrotatebyOne(int arr[],int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftrotatebyD(int arr[],int n,int d)
{
    d = d % n;
    if(d == 0) return;
    for(int i=0;i<d;i++)
    {
        leftrotatebyOne(arr,n);
    }
}
void leftrotatebyD2(int arr[],int n,int d)
{
    //copy first d elements to temp array
    d = d % n;
    if(d == 0) return;
    int temp[100];
    int i;
    for(i=0;i<d;i++)
        temp[i]=arr[i];
    for(i=d;i<n;i++)
        arr[i-d]=arr[i];
    for(i=0;i<d;i++)
        arr[n-d+i]=temp[i];
}
void leftrotatebyD3(int arr[],int n,int d)
{
    d = d % n;
    if(d == 0) return;
    reverse2(arr,n,0,d-1);
    reverse2(arr,n,d,n-1);
    reverse2(arr,n,0,n-1);
}
void movezeroestoend(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            //don't copy just swap
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[]={2,2,2,2,0,0,0,0,0,-10,0,15};
    int n=12;
    //printarray(arr,n);
    //getlargest(arr,n);
    //issorted(arr,n);
    //secondLargest(arr,n);
    //reverse(arr,n);
    //printarray(arr,n);
    //removeduplicates(arr,n);
    //printarray(arr,n);
    //leftrotatebyOne(arr,n);
    //printarray(arr,n);
    //leftrotatebyD3(arr,n,5000);
    //printarray(arr,n);
    movezeroestoend(arr,n);
    //leftrotatebyD2(arr,n,5000);
    printarray(arr,n);
    //leftrotatebyD(arr,n,5000);
    //printarray(arr,n);
    return 0;
}