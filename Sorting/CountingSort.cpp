#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ;i++)
    cin>>arr[i];

    int m;
    cin>>m;

    int count[m]= {0};

    for( int i=0 ; i<m ; i++)
    count[arr[i]]++;

    for( int i=0 ; i<n ; i++)
    {
        for( int j=0 ; j<count[i] ; j++)
        cout<<i<<endl;
    }

}