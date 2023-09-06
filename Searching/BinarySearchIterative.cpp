#include<iostream>
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

    int low = 0 ; 
    int high = n-1;

    while( low <= high)
    {
        int mid = (low + high)/2;

        if(arr[mid] == ele )
        {
            cout<<mid;
            break;
        }else if( ele > arr[mid] )
        {
            low = mid+1;

        }else if( ele < arr[mid] )
        {
            high = mid-1;
        }
    }
}