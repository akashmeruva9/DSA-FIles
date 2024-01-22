#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int m = s1.length();
    int n = s2.length();
    bool flag = false;

    for (int i = 0; i <= m - n;  )
    {
        int j = 0;

        for (j = 0; j < n; j++)
        {
            if (s1[i + j] != s2[j])
                break;
        }

        if (j == n)
        {
            flag = true;
            break;
        }else if (j == 0)
            i++;
        else
            i = i + j;
    }

    if(flag )
    cout<<"True";
    else 
    cout<<"False";
}