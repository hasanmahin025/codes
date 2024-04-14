#include<bits/stdc++.h>
using namespace std;
#define ll int
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
  	ll n; cin >> n;
  	vector<ll>v(n);
  	for(int i = 0; i < n; i++)
  	{
  		cin >> v[i];
  	}
    sort(v.begin(),v.end());

  	ll ans = v[0];

  	for(int i = 1; i < n; i++)
  	{
  	  ans = max(ans , v[i] - v[i - 1]);	
  	}
  	cout << ans << '\n';
  }
}