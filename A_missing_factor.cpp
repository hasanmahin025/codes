#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
   	ll a , b;
   	cin >> a >> b;
   	while(1)
   	{
   	   ll d = __gcd(a , b);
   	   if(d == 1)
   	   	break;
   	   	b /= d;
   	}
    if(b == 1)
    {
     cout << "Yes\n";
    }
    else
    {
     cout << "No\n";
    }
   }

}

#include<bits/stdc++.h>
using namespace std;

const int N = 2e7 + 9;
bitset<N> is_prime;
void sieve() {
  is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i * i < N; i++) {
    if (is_prime[i]) {
      for (int j = i + i; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  vector<pair<int, int>> twin_primes;
  for (int i = 1; i + 2 < N; i++) {
    if (is_prime[i] and is_prime[i + 2]) {
      twin_primes.push_back(make_pair(i, i + 2));
    }
  }
  int s;
  while (cin >> s) {
    cout << "(" << twin_primes[s - 1].first << ", " << twin_primes[s - 1].second << ")\n";
  }
  return 0;
}