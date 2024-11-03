#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
     vector<string> v;

    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
  map<string,bool> mp;
    
    for(int i=v.size()-1;i>=0;i--)
    {
        if(mp[v[i]]!=true)
        {
            cout<<v[i]<<endl;
        }
        mp[v[i]]=true;
    }

   

    return 0;
}