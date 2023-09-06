#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int arr[n];

    for( int i= 0 ; i<n ; i++)
      cin>>arr[i];

    
    int count1 = 1;
    int count2 = 0;

    for( int i = 1 ; i<n ;i++)
    {
        if(arr[i] == 1)
        {
            if(arr[i-1] != arr[i])
            count1++;
        }else 
        {
            if(arr[i-1] != arr[i])
            count2++;
        }
    }

    if(count1 < count2)
    {

        for( int i =0 ; i<n ;i++)
        {
            if( arr[i] == 1)
            cout<<i<<" ";
        }

    }else{
        for( int i =0 ; i<n ;i++)
        {
            if( arr[i] == 0)
            cout<<i<<" ";
        }
    }
}