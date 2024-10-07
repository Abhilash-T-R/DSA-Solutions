# Maximum Profit from Stock Prices in C++

This file contains a solution for determining the maximum profit that can be obtained from a given array of stock prices, where each element represents the price of a stock on a particular day. The goal is to buy low and sell high, ensuring that you buy before you sell.

## Table of Contents
1. [Algorithm Explanation](#algorithm-explanation)
2. [Implementation](#implementation)

---

### Algorithm Explanation
The algorithm iterates through the array of prices while maintaining:
- The lowest price seen so far (`bestbuy`).
- The maximum profit that can be achieved (`max_profit`).

For each day's price:
1. If the current price is higher than the lowest price seen so far, calculate the potential profit.
2. Update `max_profit` if the potential profit is greater than the current `max_profit`.
3. Update `bestbuy` to the lowest price encountered so far.

This approach has a time complexity of O(n) and a space complexity of O(1).

### Implementation
```cpp
#include<iostream>
using namespace std;

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4}; // Array of stock prices
    int n = 6;                         // Size of the array
    int max_profit = 0;                // Variable to store maximum profit
    int bestbuy = prices[0];           // Initialize bestbuy with the first price

    for(int i = 1; i < n; i++)
    {
        if(prices[i] > bestbuy) // If current price is higher than the lowest seen so far
        {
            max_profit = max(max_profit, (prices[i] - bestbuy)); // Calculate potential profit
        }
        bestbuy = min(bestbuy, prices[i]); // Update bestbuy to the lowest price seen
    }
    
    cout << "Maximum possible profit is " << max_profit << endl; // Output the maximum profit
    return 0;
}
