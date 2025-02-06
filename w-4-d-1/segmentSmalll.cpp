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

   int l = 0, r = 0;
   long long s = 0, answer = 0;
   while (r < n) {
      s += a[r];
      if (s <= k) {
         answer += (r - l + 1);
      }
      else {
         while (s> k && l <= r) {
            s -= a[l];
            l++;
         }
         if (s <= k) {
            answer += (r - l + 1);
         }
      }
      r++;
   }

   cout << answer << '\n';

   return 0;
}
