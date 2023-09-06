#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int Gsum;
    cin >> Gsum;

    for (int k = 0; k < n - 2; k++)
    {
        int i = k;
        int j = n - 1;

        while (i < j)
        {
            int sum = arr[i] + arr[j] + arr[k];

            if ((sum == Gsum) )
            {
                cout << "Yes";
                break;
            }
            else if (arr[i] + arr[j] > Gsum)
            j--;
            else 
            i++;
        }
    }
}