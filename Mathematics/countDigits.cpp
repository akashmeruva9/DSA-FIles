#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a == 0)
        cout << 1;
    else
    {
        int count = 0;

        while (a > 0)
        {
            a = a / 10;
            count++;
        }

        cout << count;
    }
}
