// Power Set 
// Print all the subsets of  the string 
// if array = "abc"
// "" , "a" , "b" , "c" , "ab" , "ac" , "bc" , "abc"

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a;
    cin>>a;
    int x = pow(2, a.length());

    for( int i = 0 ; i<x ;  i++ )
    {
        for( int j = 0 ; j<a.length() ; j++)
        {
            if((i&(1<<j)) != 0 )
            {
                cout<<a[j];
            }
        }cout<<"\n";

    }


}