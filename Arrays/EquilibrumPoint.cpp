#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i =0 ; i<n ; i++)
    cin>>arr[i];

    int PrefixSum[n];
    int PostfixSum[n];
    int sum = 0;
    for( int i =0 ; i<n ; i++)
    {
        sum += arr[i];
        PrefixSum[i] = sum;
    }
    
    sum = 0;

    for( int i = n-1 ; i>-1 ; i--)
    {
        sum += arr[i];
        PostfixSum[i] =  sum;
    }
    
    bool flag = false;

    for( int i = 0 ; i<n ;i++)
    {
        if(PrefixSum[i] == PostfixSum[i])
        flag = true;
    }
    
    if(flag == true)
    cout<<"Yes";
    else 
    cout<<"No";
    
}
