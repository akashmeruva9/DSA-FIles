// Count Trailing Zeroes in a factorial of anumber 
// example1 => n = 5 => fact = 120 => count = 1
// example2 => n = 10 => fact = 362880 => count = 2


#include<iostream>
using namespace std;

// finding the number of times 5 and it multiples divide the number 
// as 5*2 = 10 and we can find the number of trailing zeroes by finding number of times
int main()
{
    int n;
    cin>>n;

    int res = 0;

    // firstly we divide with 5, then 25, then 125 like that....
    for( int i =5 ; i<=n; i= i*5 )
    {
        res += n/i;
    }

    cout<<res;
    


}

// Example 
// 251 
// first iteration 251/5 = 50, res = 50 
// second iteration 251/25 = 10 , res = 50 + 10 = 60 
// thirs iteration 251/ 125 = 2 , res = 60 + 2 = 62 
// answer = 62  




/* Naive Approach not suitable for large numbers 

#include<iostream>
using namespace std;



int main()
{
    int a;
    cin>>a;

    int b = 1;
    // doing factorial 
    for( int i = 1; i<=a ; i++)
    {
        b *= i;
    }

    int count = 0;

    // counting zeroes 
    while(b>0)
    {
        int rem = b%10;

        if( rem == 0)
        count ++;
        else 
        break;

        b = b/10;
    }

    cout<<count;
}
*/
