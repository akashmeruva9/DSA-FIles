#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i = 0 ; i<n ; i++)
    cin>>arr[i];


    int max1 = arr[0];
    int max2 = arr[1];

    for( int i = 0  ; i<n ; i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }else if()
    }

    cout<<max1<<" "<<max2<<endl;

}