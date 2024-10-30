#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    if(n>=m)cout<<0;
    else{
        int t=m-n;
        cout<<t+1;
    }
    
    return 0;
}