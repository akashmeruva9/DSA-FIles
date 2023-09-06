#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];

    int Gsum;
    cin>>Gsum;

    int start = 0;
    int end = n-1;

    while( start < end)
    {
        int sum = arr[start] + arr[end];

        if( sum == Gsum )
        {
            cout<<"Yes";
            break;

        }else if( ( arr[start] + arr[end] ) >= Gsum )
            end --;
        else 
            start++;
        

    }
}