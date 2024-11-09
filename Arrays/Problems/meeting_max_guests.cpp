#include<iostream>
#include<algorithm>
using namespace std;
int maxGuests(int arrival[],int departure[],int n)
{
    sort(arrival,arrival+n);
    sort(departure,departure+n);
    int i=1,j=0,res=1,curr=1;
    while(i<n && j<n)
    {
        if(arrival[i]<=departure[j])
        {
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res = max(res,curr);
    }
    return res;
}
int main()
{
    int arrival[] = {800,700,600,500};
    int departure[] = {840,820,830,530};
    cout<<maxGuests(arrival,departure,4)<<endl;
    return 0;
}