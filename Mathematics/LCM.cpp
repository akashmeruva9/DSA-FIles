//Best Solution comes from eucledian algorithm 
// a*b = hcf*lcm 
// lcm = a*b/hcf 


#include<iostream>
using namespace std;


int hcf( int a , int b)
{
    if( b == 0 )
    return a;

    return hcf(b , a%b);
}

int main()
{
    int a , b;
    cin>>a>>b;

    int lcm = (a*b)/hcf(a , b);

    cout<<lcm;
}




/*naive solution
#include<iostream>
using namespace std;


int main()
{
    int a,b;

    cin>>a>>b;

    int temp = 1;
    int i = 1;

    while(1)
    {
        temp = i*min(a , b);

        if(temp%a == 0  && temp%b == 0)
        {
            cout<<temp;
            break;
        }

        i++;
    }

  
}
*/