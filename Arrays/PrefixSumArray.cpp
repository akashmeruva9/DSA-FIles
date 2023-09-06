#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];
    
    int PrefixArray[n];
    int sum = 0;

    for( int i = 0 ; i<n ; i++)
    {
        sum += arr[i];
        PrefixArray[i] = sum;
    }

    int i, j;
    cin>>i>>j;
    
    if( i == 0)
    cout<<PrefixArray[j];
    else
    cout<<PrefixArray[j] - PrefixArray[i-1];

}