#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll a , ll b , ll mod)
{
  a %= mod;
  ll ans = 1 % mod;
  while(b > 0)
  {
  	if(b & 1)
  	{
  		ans = (ans * a) % mod;
  	}
  	a = (a * a) % mod;
  	b >>= 1;
  }
  return ans;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int mod = 1e9 + 7;
   int q;cin >> q;
   while(q--)
   {
   	int a , b , c;
   	cin >> a >> b >> c;
     ll up_pow = power(b , c , mod - 1);
     ll ans = power(a , up_pow , mod);
     cout << ans << '\n';
   }
}