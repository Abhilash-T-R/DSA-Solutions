#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool myCmp(pair<int,int> &p1,pair<int,int> &p2)
{
    return (p1.first<p2.first);
}
void mergeIntervals(vector<pair<int,int>> &interval, int &n)
{
    sort(interval.begin(),interval.end(),myCmp);
    int res = 0;
    for(int i=1;i<n;i++)
    {
        if(interval[res].second>=interval[i].first)
        {
            interval[res].second = max(interval[res].second,interval[i].second);
            interval[res].first = min(interval[res].first,interval[i].first);
        }
        else{
            res++;
            interval[res] = interval[i];
        }
    }
    interval.resize(res+1);
}
int main()
{
    vector<pair<int,int>> interval = {{5,10},{3,15},{18,30},{2,7}};
    int n = interval.size();
    mergeIntervals(interval,n);
    for(auto ele:interval)
        cout<<"{"<<ele.first<<","<<ele.second<<"} ";
    return 0;
}