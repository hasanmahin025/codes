#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e13;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  ll x;
  cin >> x;
  ll LCM_a = N , LCM_b = N;
  for(ll i = 1; i * i <= x; i++)
  {
    if(x % i == 0)
    {
      ll a = i , b = x / i;
      if(__gcd(a , b) == 1)
      {
        
            LCM_a = a , LCM_b = b;
         
      }
    }
  }
  cout << LCM_a << ' ' << LCM_b << '\n';
}