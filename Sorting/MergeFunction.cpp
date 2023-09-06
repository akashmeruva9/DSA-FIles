#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr[a];

    for( int i=0 ; i<a ; i++)
    cin>>arr[i];

    cout<<"Enter :"<<endl;

    int low , mid , high;

    cin>>low>>mid>>high;
    
    int n1 = mid-low +1;
    int n2 = high-mid;

    int arr1[n1];
    int arr2[n2];

    int j=0;
    for( int i=low ; i<=mid ; i++)
    {
        arr1[j]  = arr[i];
        j++;
    }

    int k=0;
    for( int i=mid+1 ; i<high ; i++)
    {
        arr2[k] = arr[i];
        k++;
    }
    
    int m=0 , n=0 , l=low;
    while( m < n1 &&  n < n2 )
    {
        if( arr1[m] <= arr2[n])
        {
            arr[l] = arr1[m];
            l++;
            m++;
        }else if( arr2[n] < arr1[m]){
            arr[l] = arr2[n];
            l++;
            n++;
        }
    }

    for( int i=0 ; i<n1+n2 ; i++)
    cout<<arr[i]<<endl;
}