#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int left[n], right[n];

    for( int i=0 ; i<n ; i++)
    cin>>left[i];
    for( int i=0 ; i<n ; i++)
    cin>>right[i];

    int max1 = right[0];

    for( int i=0 ; i<n ; i++ )
    max1 = max(right[i] , max1);

    int freq[max1] = { 0 };

    for( int i=0 ; i<n ; i++)
    {
        for( int j=left[i] ; j<=right[i] ; j++)
        freq[j]++;
    }

    int max2 = freq[0];
    int ele = 0;

    for( int i=0 ; i<max1 ; i++)
    {
        if(freq[i] > max2)
        {
            max2 = freq[i];
            ele = i;
        }
    }

    cout<<ele;
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int Larr[n];
    int Rarr[n];

    for( int i=0 ; i< n ;i++)
    cin>>Larr[i];

    for( int i=0 ; i< n ;i++)
    cin>>Rarr[i];
    
    int max1 = 0;
    int max2 = 0;

    for( int i=0 ; i<n ; i++)
    {
        max1 = max( max1 , Larr[i]);
        max2 = max( max2 , Rarr[i]);

    }

    int max3 = max(max1 , max2);
    
    int res = 0;
    int ele = Larr[0];

    for( int i=0 ; i< max3 ; i++)
    {
        int count = 0;
        for( int j=0 ; j<n ; j++)
        {
            if(i>= Larr[j] && i<=Rarr[j])
            count++;
        }
        
        if(count>res)
        {
            res = count;
            ele = i;
        }
    }

    cout<<ele<<" "<<res;

}