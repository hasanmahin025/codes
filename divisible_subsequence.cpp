#include<bits/stdc++.h>
using namespace std;
const int N = 5e4 + 9;
#define ll long long
int a[N];
ll pref_sum[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int d, n; cin >> d >> n;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    pref_sum[0] = 0;
    for (int i = 1; i <= n; i++) {
      pref_sum[i] = pref_sum[i - 1] + a[i];
    }
     for(int i = 1; i <= n; i++)
    {
      cout << pref_sum[i] << ' ';
    }
    cout << '\n';
   
    ll ans = 0;
    map<int, int> cnt;
     cnt[pref_sum[0] % d]++;
    for (int r = 1; r <= n; r++) {

      ans += cnt[pref_sum[r] % d];
       cout << ans << '\n';

      cnt[pref_sum[r] % d]++;
    }
    

    // for(auto u : cnt)
    // {
    //   cout << u.first << ' ' << u.second << '\n';
    // }
  }


  return 0;
}