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
        int n,k;
        cin>>n>>k;

        int minNum=n*10;
        int maxNum=n*12;

        if(minNum<=k && k<=maxNum)
        {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    
    
    return 0;
}