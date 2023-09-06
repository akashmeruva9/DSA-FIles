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
    
    bool flag = false;
    int i=1;

    while( arr[i] <= ele )
    {
        if( arr[i] == ele )
        {
            cout<<i;
            flag = true;
            break;
        }

        i *= 2;
    }
    
    int low = i/2;
    int high = i;
    

    while( low <= high )
    {
        int mid = ( low + high ) /2;

        if( arr[mid] == ele )
        {
            cout<<i;
            flag = true;
            break;
        }else if( ele > arr[mid])
        low = mid + 1;
        else 
        high = mid - 1;
    }

    if(!flag)
    cout<<-1;
}