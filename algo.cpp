#include<bits/stdc++.h>
using namespace std;

int power(int x, long long n, int mod) { // O(log n)
  int ans = 1 % mod, cur = x % mod;
  for (int i = 0; (1LL << i) <= n; i++) {
    // here, cur = x^{2^i}
    if (n & (1LL << i)) { // if the i'th bit of n is 1
      ans = 1LL * ans * cur % mod;
    }
    cur = 1LL * cur * cur % mod;
  }
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x = 1e8 + 9; long long n = 1e18; int m = 1e9 + 7;
  cout << power(x, n, m) << '\n';
  return 0;
}