#include<iostream>
using namespace std;
void generateSubsets(string &str,string curr="",int index=0)
{
    if(index == str.length())
    {
        cout<<(curr)<<endl;
        return;
    }
    generateSubsets(str,curr,index+1);
    generateSubsets(str,curr+str[index],index+1);
}
int main()
{
    string str="abc";
    generateSubsets(str);
    return 0;
}