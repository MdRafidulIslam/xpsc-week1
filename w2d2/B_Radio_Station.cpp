#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    map<string,string> mp;

    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
       b+=';';
        mp[b]=a;
    }

   while (m--)
   {
        string c,d;
        cin>>c>>d;

        // cout<<c<<" "<<d<<endl;

        for(auto [x,y] : mp)
        { 
            if(x==d)
            {
                cout<<c<<" "<<d<<" "<<"#"<<y<<endl;
            }
        }
    
   }
   
    
    return 0;
}