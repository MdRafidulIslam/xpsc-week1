#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long int> v;

    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }

    long long int mx = INT_MIN;
    long long int total = 0;

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        for (int j = i + 1; j < n; j++)
        {
            total += v[j];
        }
   
        total=total+x;
        if (total % 2 == 0)
        {
            mx = max(mx, total);
        }
        total = 0;
    }

    if(mx==INT_MIN)
    {
        cout<<0;
    }
    else cout << mx;

    return 0;
}