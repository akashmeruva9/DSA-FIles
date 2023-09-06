#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;

    int arr[n+1];

    for( int i = 0 ; i<n ; i++)
       cin>>arr[i];

    cout<<"Enter element to insert :"<<endl;
    int x , k;
    cin>>x>>k;

    if(k>n || k<0)
    cout<<"Not possible";
    else {

         for( int i = n ; i>k ; i--)
            arr[i] = arr[i-1];
        
        arr[k] = x;         
    }

    cout<<"Result Array = "<<endl;

    for( int i = 0 ; i<=n ; i++)
    cout<<arr[i]<<endl;
}