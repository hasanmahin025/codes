#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7 , mod = 1e9 + 7;
int fac[N] , ifac[N];
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
int inverse(int a)
{
	return power(a , mod - 2);
}
void preFac()
{
	fac[0] = 1;
	for(int i = 1; i <= N; i++)
	{
      fac[i] = 1LL * fac[i - 1] * i % mod; 
	}
	for(int i = 0; i <= N; i++)
	{
	 ifac[i] = inverse(fac[i]); 
	}
}
int nCr(int n , int r)
{
	if(n < r) return 0;
	return 1LL * fac[n] * ifac[r] % mod * ifac[n - r] % mod;
}
int nPr(int n , int r)
{
	if(n < r) return 0;
	return 1LL * fac[n] * ifac[n - r] % mod;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   preFac();
   cin >> t;
   while(t--)
   {
   	int n;
   	cin >> n;
   	int ans = 0;
   	for(int i = 0; i <= n; i++)
   	{
   		int x;
   		cin >> x;
       ans = nCr(x , i);
   	}
   	cout << ans << '\n';
   }
}