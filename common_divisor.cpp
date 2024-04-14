#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  int t;
  cin >> t;
  long long gcd = 0;
  for(int i = 1; i <= t; i++)
  {
  	long long x;
  	cin >> x;
    gcd = __gcd(gcd , x);
  }
  int ans = 0;
  for(int i = 1; 1LL * i * i <= gcd; i++)
  {
  	if(gcd % i == 0)
  	{
  	  ans++;
  	  if(i != gcd / i)
  	  {
  	  	ans++;
  	  }
  	}
  }
  cout << ans << "\n";
}