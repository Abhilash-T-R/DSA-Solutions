#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 8, 8};
    int n = 9;
    if(n == 1)
        {
            cout<<arr[0];
            return 0;
        }
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if(mid == 0 && arr[0]!=arr[1])
        {
            cout<<arr[mid];
            break;
        }
        if(mid == n-1 && arr[n-1]!=arr[n-2])
        {
            cout<<arr[mid];
            break;
        }
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            {
                cout << mid << " ";
                break;
            }
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid - 1])
                high = mid - 1;
            else if (arr[mid] == arr[mid + 1])
                low = mid + 1;
        }
        else{
            if (arr[mid] == arr[mid - 1])
                low = mid + 1;
            else if(arr[mid] == arr[mid+1])
                high = mid - 1;
        }
    }
    return 0;
}
