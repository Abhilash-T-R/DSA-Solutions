#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low-1, j = high+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
            return j;
        swap(arr[i],arr[j]);
    }
}
void Qsort(int arr[],int low,int high)
{
    if(low < high)
    {
        int p = partition(arr,low,high);
        Qsort(arr,low,p);
        Qsort(arr,p+1,high);
    }
}
int main()
{
    int arr[] = {-100,25,-25,50,789,987,0,-999};
    Qsort(arr,0,8);
    for(int e:arr)
        cout<<e<<" ";
    return 0;
}