#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int m; cin >> m;
    vector<int> v[m + 1];
    map<int, int> cnt;
    for (int i = 1; i <= m; i++) {
      int k; cin >> k;
      while (k--) {
        int x; cin >> x;
        v[i].push_back(x);
        cnt[x]++;
      }
    }
    vector<int> ans;
    for (int i = 1; i <= m; i++) {
      for (auto x: v[i]) {
        if (cnt[x] == 1) {
          ans.push_back(x);
          break;
        }
      }
      if (ans.size() != i) {
        ans.clear(); break;
      }
      for (auto x: v[i]) {
        cnt[x]--;
      }
    }
    if (ans.empty()) {
      cout << -1 << '\n';
    }
    else {
      for (auto x: ans) {
        cout << x << ' ';
      }
      cout << '\n';
    }
  }

}