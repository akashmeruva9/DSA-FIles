// For Exame :-
// Array = [ 1 , 2 , 1 , 2 , 3 , 4 , 5 , 5]
// here only 3 and 4 appear odd number of times 
//the array will contain exactly 2 numbers that repeat odd no.of times


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i = 0  ; i<n ; i++ )
       cin>>arr[i];
    
    int res = arr[0];

    for( int i = 1  ; i<n ; i++)
    {
        res = res^arr[i];
    }

    int k = res&(~(res-1));

    int res1  = 0 , res2 = 0;

    for( int i = 0 ; i<n ; i++)
    {
        if((arr[i]&k) != 0)
        res1 = res1 ^ arr[i];
        else 
        res2 = res2^ arr[i];

    }

    cout<<res1<<" "<<res2;


}