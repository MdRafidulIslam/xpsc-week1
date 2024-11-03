#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<string> v;
    while (t--)
    {
        string s;
        cin >> s;
        auto it = find(v.begin(), v.end(), s);
        if (it == v.end())
        {
            cout << "NO"<<endl;
        }
        else if(it!=v.end())
        {
            cout<<"YES"<<endl;
        }
        v.push_back(s);
    }

    return 0;
}