// Check whether a number is  power of two or not 
// 2,4,8,1,.... powers od two 


#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    if(n<=0 )
    return 0;

    int x = n&(n-1);

    if(x==0)
       cout<<"Yes";
    else
       cout<<"No";
    
}