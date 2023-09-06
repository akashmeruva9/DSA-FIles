#include <iostream>
using namespace std;

void reverse( int arr[] , int low , int high)
{
    while(low < high)
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
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;
    
    reverse( arr , 0 , k-1);
    reverse( arr , k , n-1);
    reverse( arr , 0 , n-1);


    for( int i = 0 ; i<n ; i++)
       cout<<arr[i]<<endl;

}