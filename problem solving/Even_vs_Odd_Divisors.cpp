#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int oddNum = 0;
        int evenNum = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    evenNum++;
                }
                else
                {
                    oddNum++;
                }
            }
        }

        if (oddNum == evenNum)
        {
            cout << 0 << endl;
        }
        else if(evenNum>oddNum)
        {
            cout<<1<<endl;
        }else cout<<-1<<endl;
    }

    return 0;
}