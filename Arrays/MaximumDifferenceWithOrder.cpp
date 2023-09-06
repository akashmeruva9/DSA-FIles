#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i = 0 ; i< n ; i++)
       cin>>arr[i];

    int MaxDifference = arr[1] - arr[0];
    int MinValue = arr[0];

    for( int i = 0 ; i<n ; i++)
    {
        if( ( arr[i] - MinValue ) > MaxDifference )
        MaxDifference = arr[i] - MinValue;

        if(arr[i] < MinValue)
        MinValue= arr[i];
    }

    cout<<"Max Difference : "<<MaxDifference<<endl;
}