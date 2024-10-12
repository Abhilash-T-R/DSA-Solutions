#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    // Calculate the maximum for two recursive calls at a time
    int res1 = maxPieces(n - a, a, b, c);
    int res2 = maxPieces(n - b, a, b, c);
    int res3 = maxPieces(n - c, a, b, c);
    
    // Use std::max in two-argument form
    int res = max(res1, max(res2, res3));

    if (res == -1)
        return -1;

    return res + 1;
}

int main()
{
    int n = 5, a = 2, b = 5, c = 1;
    cout << "Max no of pieces are " << maxPieces(n, a, b, c) << endl;
    return 0;
}
