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

        string a, b;
        cin >> a >> b;

        int chef = 0, chefina = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R' && b[i] == 'S')
            {
                chef++;
            }
            else if (a[i] == 'R' && b[i] == 'P')
            {
                chefina++;
            }
            else if (a[i] == 'P' && b[i] == 'R')
            {
                chef++;
            }
            else if (a[i] == 'P' && b[i] == 'S')
            {
                chefina++;
            }
            else if (a[i] == 'S' && b[i] == 'P')
            {
                chef++;
            }
            else if (a[i] == 'S' && b[i] == 'R')
            {
                chefina++;
            }
        }

        if (chef > chefina)
        {
            cout << 0 << endl;
        }
        else if (chef < chefina)
        {
            cout << (chefina - chef) << endl;
        }
        else
            cout << 1 << endl;
        // cout<<chef<<" "<<chefina<<endl;
    }

    return 0;
}