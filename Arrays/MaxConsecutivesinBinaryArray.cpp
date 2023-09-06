#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i =0 ; i<n ;i++)
      cin>>arr[i];

    int maxcount = 0;
    int lastcount = 0;

    for( int i =0 ; i<n-1 ; i++)
    {
        if(arr[i] == arr[i+1])
        {
            lastcount++;
            if(lastcount>maxcount)
            maxcount = lastcount;

        }else{

            lastcount = 0;
        }
    }

    cout<<maxcount+1;
}