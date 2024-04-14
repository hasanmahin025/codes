#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   ll n;
   cin >> n;
   ll x = sqrtl(n);

   ll ans = 0;
   for(ll i = 2; i * i <= x; i++)
   {
      if(x % i == 0)
      {
         ans = max(ans , i);
         while(x % i == 0)
         {
            x /= i;
         }
      }
   }
   if(x > 1)
   {
      ans = max(ans , x);
   }
   cout << ans << '\n';
}