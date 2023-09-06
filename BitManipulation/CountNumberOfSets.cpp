// Brian Kenigrahn's Algorithm
// Example if n = 9
// 9 = 1001 8 = 1000
// so n = n&(n-1) => 9&8 = 1001 & 1000 => 1000 ( as one is present in both of them, else it will become zero)
// now n = 8 ( 1000 ) 7 = (0111)
// so n&(n-1)= 8&7 => 1000 & 0111 => 0000 ( it ha become zero as all the ones are covered )
// 2 iterations => 2 1s


#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int count = 0;

    while(n>0)
    {
        n = n&(n-1);
        count ++;
    }

    cout<<count;
}