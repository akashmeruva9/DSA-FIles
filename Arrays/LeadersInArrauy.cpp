#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i =0 ; i<n ; i++)
       cin>>arr[i];
    

    int max = arr[n-1];
    cout<<"Result :"<<endl<<arr[n-1]<<endl;

    for( int i = n-2 ; i>-1 ; i--)
    {
        if(arr[i] > max) 
        {
            cout<<arr[i]<<endl;
            max=arr[i];
        }
    }
}