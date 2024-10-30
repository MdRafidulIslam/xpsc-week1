#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    pair<int,string> p={44,"rafi"};
    auto[roll,name]=p;

    cout<<roll<<" "<<name<<endl;

    tuple<int,string,int> t={22,"rafidul",66};
    auto[one,two,three]=t;
    cout<<one<<" "<<two<<" "<<three<<endl;

    return 0;
}