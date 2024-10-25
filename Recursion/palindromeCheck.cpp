#include<iostream>
using namespace std;
//time - O(n) auxSpace - O(n) 
bool isPalindrome(string &str,int start,int end)
{
    if(start >= end)
        return true;
    return ((str[start] == str[end]) && isPalindrome(str,start+1,end-1)); 
}
int main()
{
    string str= "tenet";
    cout<<isPalindrome(str,0,str.length()-1);
    return 0;
}