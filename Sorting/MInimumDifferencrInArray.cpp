#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for( int i=0; i<n ; i++)
    cin>>arr[i];

    if( n< 2)
    return -1;

    sort( arr , arr+n );

    int minDiff = arr[1] - arr[0];

    for( int i=0 ; i<n-1 ; i++)
    {
        min( minDiff , arr[i+1] - arr[i] );
    }

    cout<<minDiff;
}