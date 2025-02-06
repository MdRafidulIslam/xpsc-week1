#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   long long k;
   cin >> n >> k;
   vector<int> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   int l = 0, r = 0, answer = 0;
   long long s = 0;
   while (r < n) {
      s += a[r];
      if (s <= k) {
         answer = max(answer, r - l + 1);
      }
      else {
         s -= a[l];
         l++;
      }
      r++;
   }

   cout << answer << '\n';

   return 0;
}
