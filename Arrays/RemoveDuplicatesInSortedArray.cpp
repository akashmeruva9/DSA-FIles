#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
       cin>>arr[i];
    
    int res = 1;

    for( int i = 0 ; i<n ; i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res]= arr[i];
            res++;
        }
    }

    for( int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<endl;
    }
}