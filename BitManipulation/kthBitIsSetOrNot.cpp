// given  n = 5 and k = 1 
// binary reprs. n = 000...0101 in this the 1st ( kth ) bit is 1 do it i set 
// for k = 2  2nd bit is 0 so it is not set.



#include<iostream>
using namespace std;


int main()
{
    int n , k;

    cin>>n>>k;

    int x = n<<(k-1);

    if((n&x) != 0 )
    cout<<"Yes";
    else 
    cout<<"No";
}