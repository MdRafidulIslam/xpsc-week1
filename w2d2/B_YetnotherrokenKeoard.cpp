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
        vector<pair<char, int>> upper;
        vector<pair<char, int>> lower;
        string s;
        cin >> s;

        int i = 0;

        for (char ch : s)
        {
            if (ch == 'B')
            {
                if (!upper.empty())
                {
                    upper.pop_back();
                    // i--;
                }
            }
            else if (ch == 'b')
            {
                if (!lower.empty())
                {
                    lower.pop_back();
                    // i--;
                }
            }

            else if (isupper(ch))
            {
                upper.push_back({ch, i});
            }
            else if (islower(ch))
            {
                lower.push_back({ch, i});
            }
            i++;
        }

        vector<pair<int, char>> result;

        for (auto [x, y] : upper)
        {
            result.push_back({y, x});
        }
        for (auto [x, y] : lower)
        {
            result.push_back({y, x});
        }
        
        sort(result.begin(),result.end());
        for (auto [x, y] : result)
        {
            cout <<y ;
        }
        cout<<endl;
    }

    return 0;
}