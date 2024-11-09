#include<iostream>
using namespace std;
void segPosNeg(int arr[],int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{i++;}while(arr[i]<0);
        do{j--;}while(arr[j]>=0);
        if(i>=j)
            return;
        swap(arr[i],arr[j]);
    } 
}
int main()
{
    int arr[] = {15,-3,-2,17,18,-5};
    segPosNeg(arr,6);
    for(int x : arr)
        cout<<x<<" ";
    return 0;
}