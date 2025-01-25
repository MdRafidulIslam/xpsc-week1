#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
   cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll op = 0;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                op++;
                i += k - 1;
            }
        }
        cout << op << endl;
    }
    return 0;
}
