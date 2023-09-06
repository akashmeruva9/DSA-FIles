#include<iostream>
using namespace std;

int fun(int n )
{
    if(n == 0)
    return 1;

    if(n<0)
    return 0;
    
    int a = fun(n-1) ;
    int b = fun(n-2);

    return a+b;
}

int main()
{
    int a;
    cin>>a;

    int c = fun(a);

    cout<<c;
}