#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int total = 0;

    if (a >= b)
    {
        total = total + a;
        a--;
        
        if (a >= b)
        {
            
            total = total + a;
        }else{
            total = total + b;
        }
    }
    else{
         total = total + b;
         b--;
          if (a <= b)
        {
            
            total = total + b;
        }else{
            total = total + a;
        }
    }

    cout<<total;

    return 0;
}