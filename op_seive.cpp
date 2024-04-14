#include<bits/stdc++.h>
using namespace std;

const int N = 1e8;
bitset<N> is_prime;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  vector<int> primes;
  for (int i = 2; i < N; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
    }
  }
  for (int i = 0; i < primes.size(); i += 100) {
    cout << primes[i] << '\n';
  }
  return 0;
}