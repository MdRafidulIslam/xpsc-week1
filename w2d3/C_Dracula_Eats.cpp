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
        int n;
        cin>>n;
        // cout<<n%7<<" "<<n/7<<endl;

        int x=n/7;

        if(n%7>1)
        {
            cout<<x+1<<endl;
        }else cout<<x<<endl;
    }
    
    
    return 0;
}