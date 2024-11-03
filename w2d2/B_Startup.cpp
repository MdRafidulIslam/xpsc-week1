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
        int maximam=0;

        for(int i=0;i<k;i++)
        {
            int bi,ci;
            cin>>bi>>ci;

            if(bi<=n)
            {
                maximam+=ci;
            }
        }
        cout<<maximam<<endl;
    }
    
    
    return 0;
}