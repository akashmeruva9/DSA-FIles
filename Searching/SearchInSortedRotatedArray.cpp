#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ele;
    cin >> ele;

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == ele )
        {
            cout<<mid;
            break;

        }else if (arr[low] < arr[mid])
        {
            if (ele >= arr[low] && ele <= arr[mid])
            {
                low = 0;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
                high = n - 1;
            }
        }
        else
        {
            if (ele >= arr[mid] && ele <= arr[high])
            {
                low = mid + 1;
                high = n - 1;
            }
            else
            {
                low = 0;
                high = mid - 1;
            }
        }
    }
}