#include<iostream>
using namespace std;

int main(){

    string s1, s2;
    bool flag = false;
    cin>>s1>>s2;

    for( int i=0 ; i<=s1.length() - s2.length() ; i++ )
    {
        int j=0 ;

        for( j = 0 ; j<s2.length() ; j++)
        {
            if( s1[i+j] != s2[j] )
            break;
        }

        if( j == s2.length()) {
        flag = true; break;}
    }
    
    if(flag)
    cout<<"true";
    else
    cout<<"false";

}