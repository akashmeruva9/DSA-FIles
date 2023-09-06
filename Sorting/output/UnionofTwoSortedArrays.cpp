#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];
    
    cout<<"Enter 2:"<<endl;
    int n2;
    cin>>n2;

    int arr2[n2];

    for( int i=0 ; i<n2 ; i++)
    cin>>arr2[i];

    int i=0 , j=0;
    
    while( i<n && j<n2 )
    {
        if( i>0 && arr[i-1] == arr[i] )
        {
            i++;
            continue;
        }

        if( j>0 && arr[j-1] == arr[j] )
        {
            j++;
            continue;
        }

        if(arr[i] > arr2[j] )
        {
            cout<<arr2[j]<<emdl;
            j++;
        }
        else if( arr2[j] > arr[i] )
        {
            cout<<arr[i]<<endl;
            i++;
        }else {

            cout<<arr[i]<<endl;
            i++;
            j++;
        }

    }

    while( i>0 )
}