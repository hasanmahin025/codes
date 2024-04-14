#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
      int ans = 1;
       int n;
       cin >> n;
      while(ans*2 <= n)
      {
         ans *= 2;
      }
      cout << ans << '\n';
   }
}