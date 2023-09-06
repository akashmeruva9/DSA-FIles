// works on the principle x^n = x^n/2 * x^n/2       for n = even 
//                        x^n = x^n/2 * x^n/2 * x   for n = odd

#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)            // to handel anything power 0 = 1
        return 1;

    int temp = power(x, n / 2);
    temp = temp * temp;

    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

int main()
{

    int a , b;
    cin>>a>>b;
    
    int pow = power(a , b);

    cout<<pow;
}