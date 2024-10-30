#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int x=n/10;

    if(x==0)
    {
        cout<<"000";
    }else if(x>=1 && x<10)
    {
        cout<<"00";
    }
    else if(x>=10 && x<=99)
    {
        cout<<"0";
    }
    cout<<n;



    
    return 0;
}