#include<bits/stdc++.h>
using namespace std;

bool BinarySearch( int arr[] , int low , int high , int ele)
{
    int mid = (low + high)/2;
    
    if(low > high )
    return false;

    if(arr[mid] == ele)
    return true;
    else if( ele > arr[mid])
    return BinarySearch(arr , mid+1 , high , ele);
    else 
    return BinarySearch(arr , low , mid-1 , ele);

}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];

    int ele;
    cin>>ele;

    cout<<BinarySearch( arr , 0 , n , ele);


}