#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];
    
    int ele;
    cin>>ele;

    int low = 0;
    int high = n-1;

    while( low <= high )
    {
        int mid = ( low + high) /2;

        if( ele > arr[mid] )
        low = mid+1;
        else if( ele < arr[mid] )
        high = mid-1;
        else if( arr[mid] == ele )
        {
            if( ( arr[mid+1] != ele) || ( mid == n-1) )
            {
                cout<<mid;
                break;
            }else 
            low = mid +1;
        }
    }
    cout<<-1;
}