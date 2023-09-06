#include<iostream>
using namespace std;

int fun( int n )
{
    if(n == 0)
    return 1;

    return n*fun(n-1);

}


int main()
{
    int res = fun(6);
    cout<<res;
}