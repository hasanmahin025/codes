#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
ll power(int a , ll b , int mod)
{
    int ans = 1 % mod;
	while(b)
	{
	  if(b & 1)
	  {
	  	ans = (1LL *ans * a) % mod;
	  }
	  a = (1LL * a * a) % mod;
	  b >>= 1;
	}
	return ans;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
   	int a , b , c;
   	cin >> a >> b >> c;
    int upper_pow = power(b , c , mod - 1); // using fermat litlle theorem
    int ans = power(a , upper_pow , mod);   
    cout << ans << '\n';
   }
}