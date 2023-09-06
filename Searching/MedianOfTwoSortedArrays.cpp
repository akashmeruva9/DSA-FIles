#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n1;
    cin>>n1;

    int arr1[n1];

    for( int i=0 ; i<n1 ; i++)
    cin>>arr1[i];

    int n2;
    cin>>n2;

    int arr2[n2];

    for( int i=0 ; i<n2 ; i++)
    cin>>arr2[i];
    
    int max = n1 + n2;

    int i=0;
    int j=0;
    int k =0;
    int arr[max];

    while( k < max )
    { 
        if(arr1[i] <= arr2[j] && i < n1 )
        {
            arr[k] = arr1[i];
            i++;
        }else if(arr2[j] <= arr1[i] && j < n2 )
        {
            arr[k] = arr2[j];
            j++;
        }
        
        k++;
    }

    for( int i=0 ; i<max ; i++)
    cout<<arr[i]<<" ";
}