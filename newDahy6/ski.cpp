#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n, k, q;
       cin>>n>>k>>q;
       int t[n];
       int pd = 0;
       ll answer = 0;
       for(int i=0; i<n; i++)
       {
           cin>>t[i];
           if(t[i] <= q)
           pd++;
           else
           pd = 0;
           answer += max(0, pd - k + 1);
       }
       cout<<answer<<endl;
    }
    return 0;
}
