#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i =0 ; i< n ; i++)
    cin>>arr[i];

    int resIndex = 0;
    int count = 0;

    for( int i =1 ;i<n ; i++)
    {
        if( arr[i] == arr[resIndex])
        count++;
        else 
        count--;

        if(count == 0)
        {
            count = 1;
            resIndex = i;
        }
    }

    int count2 = 0;

    for( int i =0 ; i< n; i++)
    if( arr[i] == arr[resIndex])
    count2++;

    if(count2>n/2)
    cout<<resIndex;
    else 
    cout<<-1;
}