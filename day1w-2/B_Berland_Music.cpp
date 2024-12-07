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
        int n;
        cin >> n;

        int a[n + 5];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string b;
        cin >> b;

        vector<int> one;
        vector<int> zero;

        for (int i = 0; i < n; i++)
        {

            if (b[i] == '0')
            {
                zero.push_back(a[i]);
            }
            else
            {
                one.push_back(a[i]);
            }
        }
        map<int, int> mp;
        int k = n;
        sort(zero.begin(), zero.end(), greater<int>());
        sort(one.begin(), one.end(), greater<int>());

        for (auto x : one)
        {
            mp[k] = x;
            k--;
        }
        for (auto x : zero)
        {
            mp[k] = x;
            k--;
        }

        int bb[n + 5];

        for (auto s : mp)
        {
            bb[s.second] = s.first;
        }

        for (int i = 0; i < n; i++)
        {
            cout << bb[a[i]] << " ";
        }
        cout << endl;
    }

    return 0;
}