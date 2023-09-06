
#include<iostream>
using namespace std;

bool palindrome( string &a , int n , int k)
{
    if(k>=n)
    return true;

    if(a[n] != a[k])
    return false;

    return palindrome(a, n-1 , k+1);
}

int main()
{
    string a;
    cin>>a;

    bool res = palindrome( a , a.size()-1 , 0 );

    if(res == true )
    cout<<"Yes";
    else 
    cout<<"No";

}