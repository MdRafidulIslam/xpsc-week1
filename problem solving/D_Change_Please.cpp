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
       int x;
       cin>>x;

       int t=(100-x)/10;
       cout<<t*10<<endl;

    }
    
    
    return 0;
}