// In an array find the number that only ocuurs odd no. of times
// exaple = [ 1 1 2 3 3 3 4 4 5 5] answer = 2
// using XOR opeartor we can achieve this 
// if X^X = 0 but X^X^X = X
// so in array of elements, the odd number element will be printed
// 1^1^1^1^2^3^3 = 2 

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    int arr[a];

    for(int i = 0 ; i<a ; i++)
      cin>>arr[i];
    
    int x = arr[0];

    for(int i =1 ; i<a ; i++)
       x = x^arr[i];

     cout<<"answer : "<<x;
}





/* Naive Solution 
#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for( int i = 0  ; i<n ; i++)
    cin>>arr[i];

    for( int i = 0 ; i<n ; i++)
    {
        int count = 0;

        for(int j = 0 ; j<n ; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        cout<<arr[i]<<count<<endl;
        if(count%2 != 0 ){
            cout<<"Answer :"<<arr[i];
            break;
        }
        
    }
}
*/