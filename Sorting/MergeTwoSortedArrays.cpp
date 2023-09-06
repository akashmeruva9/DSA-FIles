#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr1[n], arr2[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr1[i];

    cout<<"Enter"<<endl;

    for( int i=0 ; i<n ; i++)
    cin>>arr2[i];
    
    int res[2*n];

    int i=0, j=0 , k=0;
    
    while( k < (2*n) )
    {
        if(arr1[i] <= arr2[j] && i<n )
        {
            res[k] = arr1[i];
            i++;
        }else {
            if( j<n )
            {
                res[k]=arr2[j];
                j++;
            } 
        }

        k++;
    }

    for( int i=0 ; i< (2*n) ; i++)
    cout<<res[i]<<endl;

}