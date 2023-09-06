#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i = 0; i<n ; i++)
    cin>>arr[i];
    
    int count = 1;
    int res = 1;

    for( int i = 1 ; i<n ; i++)
    {
        if( ( arr[i]%2 == 0 )  &&  ( arr[i]%2 != 0 ) )
           count ++;
        else if( ( arr[i]%2 != 0 )  && ( arr[i]%2 == 0 ))
           count ++;
        else 
           count = 1;
         
        if(count > res)
        res=count;
    }

    cout<<res;
}