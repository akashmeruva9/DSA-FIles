#include<iostream>
using namespace std;


int main()
{

    int n;
    cin>>n;

    int arr[n];

    for( int i = 0 ; i<n ; i++)
       cin>>arr[i];
    
    int count = 0;

    for( int i = 0 ; i< (n-1) ; i++)
    {
        if(arr[i] == arr[i+1])
          count++;
        else 
        {
            cout<<arr[i]<<" : "<<count+1<<endl;
            count = 0;
        }
          
    }

    cout<<arr[n-1]<<" : "<<count+1;


}