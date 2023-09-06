#include<iostream>
using namespace std;

void subsets( string a , int n, int k , string curr)
{
    if(k == n)
    {
       cout<<curr<<endl;
       return ;
    }

    subsets(a , n , k+1 , curr + a[k]);
    subsets(a , n , k+1 , curr);
}

int main()
{
    string a;
    cin>>a;

    subsets(a , a.size() , 0 , " ");
}