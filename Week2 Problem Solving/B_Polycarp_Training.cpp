#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int> ml;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int sday = 0;

    int i = 1;
    while (1)
    {
        auto it = ml.lower_bound(i);
        
       
        if(it==ml.end())
        {
            break;
        }
        else{

            sday++;
            ml.erase(it);
        }
        i++;

    }

    cout<<sday;
    

    return 0;
}