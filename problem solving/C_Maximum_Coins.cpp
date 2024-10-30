#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n == x)
        {
            int total = 0;
            for (int i = 1; i <= n; i++)
            {
                total += pow(2, i);
            }
            cout << total<<endl;
        }
        else
        {
            int total = 0;
            int s = 0;
             for (int i = n; i > n - x; i--)
            {
                s += pow(2, i);
            }

            for (int i = 1; i <= n - x; i++)
            {
                total += pow(2, i);
            }
            cout<<s-total<<endl;
        }
    }

    return 0;
}