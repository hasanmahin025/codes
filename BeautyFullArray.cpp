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
   	ll n , k , b , s;
   	cin >> n >> k >> b >> s;
   	if(k * b > s)
   	{
   		cout << -1 << '\n';
   		continue;
   	}
   	vector<ll>ans(n + 1 , 0);
   	ans[1] = k * b;
   	ll left = s - k * b;
   	for(int i = 1; i <= n; i++)
   	{
   	 ll x = min(left, k - 1);
   	 ans[i] += x;
   	 left -= x;
   	}
   	if(left != 0)
   	{
   	 cout << -1 << '\n';
   	 continue;
   	}
   	for(int i = 1; i <= n; i++)
   	{
   	 cout << ans[i] << ' ';
   	}
   cout << '\n';

   } 
}