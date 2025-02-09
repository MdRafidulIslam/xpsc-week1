#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 5;

int n, k;
vector<int> v;
int ts[mx];

int main() {
    scanf("%d%d", &n, &k);
    v.resize(n);
    for (auto &x : v) cin>>x;
    long long answer = 0;
    int l = 0, number = 0;
    for (int i = 0; i < n; ++i) {
        if (!ts[v[i]]++) {
            if (++number > k) {
                while (true) if (--ts[v[l++]] == 0) break;
            }
        }
        answer += i - l + 1;
    }
    printf("%lld\n", answer);
    return 0;
}
