#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
    	ll n , p , l , t;
    	cin >> n >> p >> l >> t;
    	ll low = 1 , hi = n;
    	ll score = 1 + (n - 1) / 7;
    	while(low < hi)
    	{
    		ll mid = (low + hi) >> 1;
    		ll baki = p - mid * l;
    		baki = max(baki , 0LL);
    		baki -= min(score , mid * 2) * t;
    		if(baki > 0)
    		{
    		  low = mid + 1;
    		}
    		else
    		{
    			hi = mid ;
    		}
    	}
    	cout << n - hi << '\n';
    }
  
}