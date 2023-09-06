#include<iostream>
using namespace std;

int josephus( int n , int k)
{
    if( n == 0)
    return 0;

    return (josephus(n-1, k)+k)%n;
}


int main()
{
    int res = josephus( 7 , 3);
    cout<<res;
}