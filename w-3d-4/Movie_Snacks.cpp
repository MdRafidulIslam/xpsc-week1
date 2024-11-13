#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;

    int comboOffer=(2*z)+y;
    int withoutOffer=(2*x)+(3*y);

    if(comboOffer>withoutOffer)
    {
        cout<<withoutOffer;
    }else cout<<comboOffer;
    return 0;
}