#include<bits/stdc++.h>
using namespace std;

int MergeSort( int arrr[] , int low , int high , int mid)
{
    if( low > high)
    return;
    
    int mid = ( low + high)/2;
    
    MergeSort( arr , low , mid-1);
    MergeSort( arr , mid+1 , high);
    
}
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];

}