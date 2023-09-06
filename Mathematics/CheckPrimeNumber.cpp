#include <iostream>
using namespace std;

bool isPrime(int a)
{
    if(a == 1)
    return false;
    else if(a ==2 || a == 3)
    return true;
    else if(a%2 == 0 || a%3 == 0)
    return false;
    else {

        for( int i = 5 ; i*i<=a ; i= i+6)
        {
            if(a%i == 0 || a%(i+2) == 0)
            return false;
        }

        return true;
    }
}

int main()
{
    int a;
    cin >> a;

    if (a == 1)
        cout << "Neither Prime nor Composite";
    else if (a == 2 || a == 3)
        cout << "Prime";
    else if (a % 2 == 0 || a % 3 == 0)    // This will check maximum number of cases and helps reduce
        cout << "Not Prime";              // time complexity
    else
    {

        // i*i <= a because all prime numbers have pairs
        // and all the smaller numbers in the pairs are
        // always less than square root on n

        bool b = true;

        for (int i = 5; i * i <= a; i = i + 6)    // i starts with 5 as 1234 are aldready checked 
        {                                         // i = i+6 bcz all 2 and 3 multiples are aldready eliminated
            if (a % i == 0 || a % (i + 2) == 0)   // a%(i+2) bcz consequent prime numbers are seperated by 2 numbers 
            {
                b = false;
                break;
            }
        }

        if (b == false)
            cout << "Not Prime";
        else
            cout << "Prime";
    }
}



/* Naive Solution 
#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;

    bool b = true;

    for (int i = 2; i < a; i++)
    {

        if (a % i == 0)
        {
            b = false;
            break;
        }
    }

    if (b == false)
        cout << "Not Prime";
    else
        cout << "Prime";
}
*/