#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,x;
        cin>>a>>b>>x;

        int costTime=(a*b);
        int fixedTime=(x*24*60);
        if(costTime<=fixedTime)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    return 0;
}