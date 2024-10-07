#include<iostream>
using namespace std;
int main()
{
    int heights[] ={1,8,6,2,5,4,8,3,7};
    int n = 9;
    int left = 0, right = n-1;
    int maxArea = 0;
    while(left < right)
    {
        int width = right-left;
        int height = min(heights[left], heights[right]);
        int area = width * height;
        maxArea = max(maxArea,area);
        (heights[left]<heights[right])?left++:right--;
    }
    cout << maxArea << endl;
    return 0;
}