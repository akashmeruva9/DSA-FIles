#include<iostream>
using namespace std;


int main()
{
    int a;
    cin>>a;

    int i = 1;
    for(  ; i*i<=a ; i++)
    {
        if(a%i == 0)
        cout<<i<<" ";
    }

    for(   ; i<=a ; i++ )
    {
        if(a%i == 0)
        cout<<i<<" ";
    }
}





















/* Naive Solution 

#include<iostream>
using namespace std;


int main()
{
    int a; 
    cin>>a;

    for( int i = 1 ; i*i<= a ;  i++)
    {
        if(a%i == 0)
        {
            cout<<i<<" ";

            if(i != (a/i))
            cout<<a/i<<" ";
        }
    }
}
*/