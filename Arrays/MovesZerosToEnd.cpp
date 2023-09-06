#include<bits/stdc++.h>
using namespace std;

void reverse( int arr[] , int low , int high)
{
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i = 0 ; i<n ; i++)
        cin>>arr[i];
    
    int count = 0;
    for( int i = 0 ; i<n ; i++)
    {
        if(arr[i] != 0)
        {
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            
            count++;
        }
    }

    for( int i= 0 ; i<n ; i++)
       cout<<arr[i]<<endl;
    

}