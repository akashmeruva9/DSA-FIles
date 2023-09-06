#include<iostream>
using namespace std;

void TOH( int n , char source , char desti , char auxilary ){

    if(n == 1){
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<desti<<endl;
    return;
    }
    

    TOH(n-1 , source , auxilary , desti );
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<desti<<endl;
    TOH(n-1 , auxilary, desti , source);


}


int main()
{
    TOH(3, 'A', 'C' , 'B');
}