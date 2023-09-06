#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];

     int ele = 1;

    int low1 = 0;
    int high1 = n-1;
    
    int FirstOccurence, LastOccurence;

    while( low1 <= high1)
    {
        int mid = ( low1 + high1) /2;

        if( ele > arr[mid])
        low1 = mid+1;
        else if( ele < arr[mid])
        high1 = mid-1;
        else if( ele == arr[mid])
        {
            if( (arr[mid+1] != ele ) || (mid == n-1) )
            {
                LastOccurence = mid;
                break;
            }
            else 
            low1 = mid +1;

        }
    }
    
    low1 = 0,  high1 = n-1;

    while( low1 <= high1)
    {
        int mid = ( low1 + high1) /2;

        if( ele > arr[mid])
        low1 = mid+1;
        else if( ele < arr[mid])
        high1 = mid-1;
        else if( ele == arr[mid])
        {
            if( (arr[mid-1] != ele ) || (mid == 0) )
            {
                FirstOccurence = mid;
                break;
            }
            else 
            high1 = mid-1;

        }
    }

    cout<<LastOccurence-FirstOccurence+1<<endl;
}