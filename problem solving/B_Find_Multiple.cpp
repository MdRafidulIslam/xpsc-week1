#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 1; c <= 1000; i++)
    {
        c = c * i;
        
        if (a <= c && c <= b)
        {
            cout << c;
            return 0;
        }
    }

  cout<<-1;
   
}