#include<bits/stdc++.h>
using namespace std;

void permute( string a , int k)
{
    if( k == a.size())
    {
        cout<<a<<endl;
        return;
    }


    for( int i = k;  i<a.size() ; i++)
    {
        swap(a[k] , a[i]);
        permute(a , k+1);
        swap(a[i] , a[k]);
    }
}

int main()
{
    string a;
    cin>>a;

    permute(a, 0);
}