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
        priority_queue<long long int> pq;
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!pq.empty())
                {
                    sum += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(x);
            }
        }

        cout << sum <<endl;
    }

    return 0;
}