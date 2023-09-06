#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];

    cout<<"Enter2"<<endl;

    int n2;
    cin>>n2;
    int arr2[n2];

    for( int i=0 ; i<n2 ; i++)
    cin>>arr2[i];

    sort( arr , arr+n );
    sort( arr2 , arr2+n2 );
    
    int i=0 , j = 0;
    while( true )
    {
        if(arr[i] == arr2[j] )
        {
            cout<<arr[i]<<endl;

            if( i<n && j<n2)
            {
                i++; 
                j++;
            }
            else 
            break;

        }else if( arr[i] > arr2[j] )
        {
            if( j<n2 )
            j++;
            else 
            break;

        }else if( arr2[j] > arr[i] )
        {
            if( i<n )
            i++;
            else 
            break;
        }
    }

}