// best solution comes from eucledin algorithm 
// for   a = 12 b = 15 
// first a = b and b = a%b
// =>    a = 15 and b = 12%15 = 12 
// =>    a = 12 and b = 15%12 = 3 
// =>    a = 3  and b = 12%3 = 0

#include<iostream>
using namespace std;

int gcd( int a , int b)
{
    if(b == 0)
    return a;

    return gcd( b , a%b);
}

int main()
{
    int a, b;

    cin>>a>>b;
    int hcf = gcd(a , b);

    cout<<hcf;
}