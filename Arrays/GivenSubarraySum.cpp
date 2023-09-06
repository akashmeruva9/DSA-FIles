#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i=0 ; i<n ; i++)
    cin>>arr[i];
    
    int Givensum;
    cin>>Givensum;

    int currentsum = 0;
    int lastIndesx = 0;
    bool flag = false;

    for( int i=0 ; i< n; i++)
    {
        currentsum += arr[i];
        
        while(currentsum > Givensum)
        {
            currentsum = currentsum - arr[lastIndesx];
            lastIndesx++;
        }

        if(currentsum == Givensum)
        {
            flag = true;
            break;
        }

    }

    if( flag == true )
    cout<<"Yes";
    else 
    cout<<"No";

}