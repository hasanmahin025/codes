#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll mul_mod(ll x , ll y , ll mod)
{
  return __int128(x) * y % mod;
}
ll power(ll x  , ll y , ll mod)
{
  ll ans = 1;

  while(y)
  {
    if(y & 1)
    {
      ans = mul_mod(ans , x , mod);
    }
    x = mul_mod(x , x , mod);
    y >>= 1;
  }
  return ans;
}
ll mod_inverse(ll x , ll mod)
{
    return power(x , mod - 2 , mod);
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   ll a , b , p;
   cin >> a >> b >> p;

   cout << power(a , b , p) << '\n';
   cout << mul_mod(a , b , p) << '\n';
   cout << mul_mod(a , mod_inverse(b , p) , p) << '\n';
}