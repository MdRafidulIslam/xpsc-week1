#include <bits/stdc++.h>
#define ll long long int
using namespace std;

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

            vector<ll> preSum(n + 1);

            for (int i = 1; i <= n; i++)
            {
                ll curr = 0;
                if (s[i - 1] == 'W')
                    curr = 1;

                preSum[i] = preSum[i - 1] + curr;
            }

            ll res = INT_MAX;

            for (int i = k; i <= n; i++)
            {
                ll curr = preSum[i] - preSum[i - k];
                res = min(res, curr);
            }

            cout << res << endl;
    }

}
