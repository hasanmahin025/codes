#include <bits/stdc++.h>
using namespace std;

int main () {
  int tt;
  cin >> tt;
  while (tt--) { 
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (auto& x : a) { 
      cin >> x;
    }
    vector<int> x;
    map<int, bool> seen;
    for (int i = 0; i < q; ++i) { 
      int y;
      cin >> y;
      if (seen.find(y) == seen.end()) { 
        x.push_back(y);
      }
      seen[y] = true;
    }
    for (auto y : x) { 
      for (auto& b : a) { 
        if (b % (1 << y) == 0) { 
          b += (1 << (y - 1));
        }
      }
    }
    for (auto& b : a) { 
      cout << b << " ";
    }
    cout << '\n';
  }
  return 0;
}
