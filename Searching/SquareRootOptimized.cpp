#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int low = 0;
    int high = n-1;

    int ans = 0;

    while( low <= high )
    {
        int mid = ( low + high ) /2;
        int midSquare = mid * mid;

        if( midSquare == n )
        {
            ans = mid;
            break;
        }else if( midSquare > n)
        {
            high = mid -1 ;
        }else {
            low = mid+1;
            ans = mid;
        }
    }

    cout<<ans;
}