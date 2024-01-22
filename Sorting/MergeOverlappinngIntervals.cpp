#include<bits/stdc++.h>
using namespace std;

struct Interval{
    int start, end;
};

bool overlap( Intervl a1 , Interval a2)
{
    if( a2.start <= a1.end && a2.start >= a1.start )
    return true;
    else return false;
}

int main()
{
    int a;
    cin>>a;

    Interval arr[a];

    for( int i=0 ; i<a ; i++)
    cin>>arr[i].start>>arr[i].end;
    
    sort( arr , arr+N , compare);

    for( int i=0 ; i<n-1 ; i++)
    {
        if( overlap( arr[i] , arr[i+1] ) )
        {

        }
    }

}