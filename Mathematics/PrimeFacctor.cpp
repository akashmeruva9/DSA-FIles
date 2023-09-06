#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    if(a<=1)
    cout<<1;

    while(a%2 == 0)                 // printing all 2 prime factors
    {
        cout<<2;
        a = a/2;
    }

    while(a%3 == 0)                  // printing all 3 prime factors 
    {
        cout<<3;
        a = a/3;
    }

                                           // as aldready 2 and 3 are covered, we start with 5 
    for( int i = 5 ; i*i<=a ; i = i+6)     // and i = i+6 because 2 and 3 factors aldready covered
    {
        while(a%i == 0)                    // knowing if the factor divides the number perfectly 
        {
            cout<<i;
            a /= i;
        }

        while(a%(i+2) == 0)                 // prime numbers are always consequentr by 2 numbers
        {
            cout<<i+2;
            a /= (i+2);
        }
    }

    if(a>3)                                  // after prime factorization if the number is still gretaer than 3 
    cout<<a;                                 // as 2 and 3 are aldready covered, that means this is the last sing prime factor 

}




/* Naive solution 
#include<iostream>
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
    cin>>a;

    for( int i =2 ; i<=a ; i++)
    {
        if(isPrime(i))
        {
            while(a%i == 0)
            {
                cout<<i;
                a = a/i;
            }
        }
    }

}*/