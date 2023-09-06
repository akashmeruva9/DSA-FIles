// sieve of erathosthenes

#include <iostream>
#include<vector>
using namespace std;


int main()
{
    int a;
    cin >> a;

    vector<bool> arr(a+1 , true);                 // initializing all values with value true 

    for (int i = 2; i*i<=a; i++)
    {
        if ( arr[i] == true )
        {
            for (int j = i*i; j <= a; j = j+i)    // changing all the values of multiples of 
                arr[j] = false;                   //starts with i*i bcz all values before them are aldready marked 
        }
    }

    for (int i = 2; i <= a; i++)
    {
        if (arr[i] == true)
            cout << i << " ";
    }
}