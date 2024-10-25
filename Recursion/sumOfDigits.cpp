#include<iostream>
using namespace std;
//time - O(d) AuxSpace - O(d)
int sumOfDigits(int n)
{
    if(n <= 9)
        return n;
    return sumOfDigits(n/10) + n%10;
}
int main()
{
    int n = 545;
    cout<<sumOfDigits(n)<<endl;
    return 0;
}