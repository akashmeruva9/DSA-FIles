// Kadane's Algorithm


#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    int arr[n];

    for( int i=0 ; i< n ; i++)
       cin>>arr[i];

    int sum = 0, Maxsum = 0;

    for( int i =0 ; i<n ; i++)
    {
        sum = sum + arr[i];

        if(sum > Maxsum)
        Maxsum = sum;

        if(sum < 0 )
        sum = 0;
    }

    cout<<Maxsum;
}

// To Print MaximumSubArray
/*
#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;

    int arr[n];

    for( int i=0 ; i< n ; i++)
       cin>>arr[i];

    int sum = 0, Maxsum = 0;
    int start = 0, end = 0;

    for( int i =0 ; i<n ; i++)
    {
        sum = sum + arr[i];

        if(sum > Maxsum)
        {
            Maxsum = sum;
            end = i;
        }

        if(sum < 0 )
        {
            sum = 0;
            start = i+1;
        }
    }

    for( int i = start ; i<=end ; i++)
       cout<<arr[i]<<" ";
}

*/