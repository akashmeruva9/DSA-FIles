#include<iostream>
using namespace std;

int countdigitsum( int a )
{
    if( a <= 0)
    return 0;

    return (a%10) + countdigitsum(a/10);

}

int main()
{
    int a;
    cin>>a;

    int res = countdigitsum(a);

    cout<<res;
}