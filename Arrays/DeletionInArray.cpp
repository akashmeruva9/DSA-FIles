#include<iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i = 0 ; i< n ; i++)
      cin>>arr[i];

    cout<<"Enter Element to delete"<<endl;

    int x;
    cin>>x;
    
    int i  = 0;
    for(  ; i< n ; i++)
    {
        if(arr[i] == x)
        break;
    }


    for( ; i<(n-1) ; i++)
    arr[i] = arr[i+1];

    arr[n-1] = -1;

    cout<<"Resultant Array :"<<endl;

    for( int i = 0 ; i<n ; i++)
       cout<<arr[i]<<endl;

}