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

        vector<char> v;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            v.push_back(s[i]);
        }

        
        int j = v.size();
        int fid=0;
        int lid=0;

        for(int i=0;i<j;i++)
        {
            if(v[i]=='B')
            {
                fid=i;
                break;
            }
        }

        for(int x=j-1;x>=0;x--)
        {
            
            if(v[x]=='B')
            {
                lid=x;
                break;
            }
        }
        cout<<(lid-fid)+1<<endl;
       
     
    }

    return 0;
}