#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7 , mod = 1e9 + 7;
int a , b , n;
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
int inverse(int n)
{
	return power(n , mod - 2);
}
int f[N] , ifac[N];
void fac()
{
 f[0] = 1;
 for(int i = 1; i <= N; i++)
 {
  f[i] = 1LL * f[i - 1] * i % mod;
 }
 for(int i = 0; i <= N; i++)
 {
 	ifac[i] = inverse(f[i]);
 }
}
bool is_good(int sum)
{
	while(sum)
	{
	  int digit = sum % 10;
	  if(digit != a and digit != b)
	  {
	  	return false;
	  }
	  sum /= 10;
	}
	return true;
}
int nCr(int n , int c)
{
	if(c > n) return 0;
		return 1LL * f[n] * ifac[c] % mod * ifac[n - c] % mod;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    fac();
    cin >> a >> b >> n;
    int ans = 0 , sum = 0;
    for(int i = 0; i <= n; i++)
    {
      sum = i * a + (n - i) * b;

      if(is_good(sum))
      {
      	int ways = nCr(n , i);
      	ans += ways;
      	ans %= mod;
      }
    }
  cout << ans << '\n';
}