#include<iostream> 
using namespace std;


int main()
{

    int a;
    cin>>a;

    int b = a;
    int c = 0;

    while(a>0)
    {
        int rem = a%10;
        a = a/10;

        c = c*10 + rem;

    }

    cout<<b<<endl<<c;

}