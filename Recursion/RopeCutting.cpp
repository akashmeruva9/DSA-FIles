// given a rope of length l = 30 cm 
// and given 3 length in which the rope can be cut 
// a = 10 , b = 9 , c = 6 
// with a length we can cut the rope 3 times 
// with b length we can cut the rope 3 times 
// but with c length we can cut the rope 5 times 
// so c is the best length in which we  can cut the rope 

#include<iostream>
using namespace std;

int fun( int n , int a , int b ,int c)
{
    if(n == 0)
    return 0;

    if(n < 0)
    return -1;

    int max1 = max( fun(n-a , a , b, c) , fun(n-b , a , b, c)  );
    int res = max( fun(  n-c ,  a ,  b , c) , max1);

    if(res == -1)
    return -1;

    return res+1;

}

int main()
{
    int n , a, b, c;

    cin>>n>>a>>b>>c;

    int res = fun(  n ,  a ,  b , c);

    cout<<res;
}