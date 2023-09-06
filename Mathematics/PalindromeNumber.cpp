#include<iostream> 
using namespace std;


int main()
{

    int a;
    cin>>a;

    int b = a;
    int c = 0;

    // Reversing the number 
    while(a>0)
    {
        int rem = a%10;
        a = a/10;

        c = c*10 + rem;

    }

    bool d = true;
    
    //Checking if both are equal 
    while(b>0)
    {
        int rem1 = b%10;
        int rem2 = c%10;

        if(rem1 != rem2)
        d = false;

        b = b/10;
        c = c/10;
    }
    
    if(d == false)
    cout<<"No";
    else 
    cout<<"Yes";


}
