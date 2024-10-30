#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans1 = 0, ans2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (v.front() > v.back())
            {
                ans1 += v.front();
                v.erase(v.begin());
            }
            else
            {
                ans1 += v.back();
                v.erase(v.end() - 1);
            }
        }
        else
        {
            if (v.front() > v.back())
            {
                ans2 += v.front();
                v.erase(v.begin());
            }
            else
            {
                ans2 += v.back();
                v.erase(v.end() - 1);
            }
        }
    }

    cout<<ans1<<" "<<ans2;

    return 0;
}