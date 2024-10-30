#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    int total = 0;
    int x = 1;

    if (t < a)
    {
        cout << 0;
    }
    else
    {
        for (int i = a; i<=t; i=a*x)
        {

            total += b;
            x++;
        }

        cout << total;
    }

    

    return 0;
}