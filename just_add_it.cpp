#include<bits/stdc++.h>
using namespace std;
const int mod = 10000007;
int power(int n , int p)
{
  int ans = 1;
  while(p)
  {
  	if(p & 1)
  	{
  	 ans = (1LL * ans * n) % mod;
    }
    n = (1LL * n * n) % mod;
    p >>= 1;
  }
  return ans;

}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    while(cin >> n >> k)
    {
    	if(n == 0 and k == 0)
        break;
        int ans = 0;
        ans = (2 * power(n - 1 , k) % mod + power(n , k)) % mod;
        ans += (2 * power(n - 1 , n - 1) % mod + power(n , n)) % mod;
      
      cout << ans % mod << '\n';
    }
   
}