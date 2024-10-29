#include <iostream>
using namespace std;
void mergeSingleSorted(int m, int n, int nums1[], int nums2[])
{
    int i = m - 1, j = n - 1;
    int index = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[index--] = nums1[i--];
        }
        else
            nums1[index--] = nums2[j--];
    }
    while (j >= 0)
    {
        nums1[index--] = nums2[j--];
    }
}
int main()
{
    int nums1[]={1,2,3,0,0,0},nums2[] = {2,5,6};
    int m = 3,n=3;
    mergeSingleSorted(m,n,nums1,nums2);
    for(int e:nums1)
        cout<<e<<" ";
    return 0;
}