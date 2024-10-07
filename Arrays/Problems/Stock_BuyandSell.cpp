#include<iostream>
using namespace std;
int main()
{
    int prices[] = {7,1,5,3,6,4};
    int n = 6;
    int max_profit = 0;
    int bestbuy = prices[0];
    for(int i=1;i<n;i++)
    {
        if(prices[i]>bestbuy)
        {
            max_profit = max(max_profit,(prices[i]-bestbuy));
        }
        bestbuy = min(bestbuy,prices[i]);
    }
    cout<<"Maximum possible profit is "<<max_profit<<endl;
    return 0;
}