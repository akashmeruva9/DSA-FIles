#include<bits/stdc++.h>
using namespace std;

int subsetSum(int arr[] , int n , int k)
{
    if(n == 0  && k!=0)
    return 0;
    
    if(n == 0 && k == 0)
    return 1;

    return subsetSum(arr , n-1 , k-arr[n]) + subsetSum(arr , n-1 , k);

}

int main()
{
    int a;
    cin>>a;
    
    int arr[a];

    for( int i =0  ; i< a; i++)
    cin>>arr[i];

    int n ;
    cin>>n;

    int res = subsetSum(arr , a , n );
    cout<<res;
}