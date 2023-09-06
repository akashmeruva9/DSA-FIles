#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

     int arr[n];

    for( int i = 0 ; i<n ; i++)
      cin>>arr[i];

    int lmax[n], rmax[n];

    lmax[0] = arr[0];
    for( int i = 1 ; i<n ; i++)
    {
        if(arr[i]> lmax[i-1])
        lmax[i] = arr[i];
        else 
        lmax[i] = lmax[i-1];
    }

    rmax[n-1] = arr[n-1];
    for( int i = n-2 ; i>=0 ; i--)
    {
        if(arr[i]>rmax[i+1])
        rmax[i]=arr[i];
        else 
        rmax[i] = rmax[i+1];
    }

    int res = 0;

    for( int i=1 ; i<(n-1) ; i++)
    {
        res += (min( lmax[i] , rmax[i]) - arr[i]);
    }

    cout<<res;
}