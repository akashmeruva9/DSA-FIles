#include<iostream>
using namespace std;


int main()
{
    int a;
    cin>>a;

    int arr[a];
    
    for( int i=0 ; i<a ; i++)
    cin>>arr[i];

    for( int i=0 ; i<a-1 ; i++)
    {
        for( int j=0 ; j<a-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]);
        }
    }

    for( int i=0 ; i<a ; i++)
    cout<<arr[i]<<endl;
}