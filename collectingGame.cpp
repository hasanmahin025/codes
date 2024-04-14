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
   	int n;
   	cin >> n;
   	vector<pair<ll , ll>>v(n);
   	for(int i = 0; i < n; i++)
   	{
   	 cin >> v[i].first;
   	 v[i].second = i;
   	}
   	sort(v.begin(),v.end());
   	vector<ll>pref(n , 0);
   	pref[0] = v[0].first;
   	for(int i = 1; i < n; i++)
   	{
   	 pref[i] = pref[i - 1] + v[i].first;
   	}
   	vector<ll>ans(n, 0);
   	stack<int>idx;
   	for(int i = 0; i < n; i++)
   	{
   	 idx.push(v[i].second);
   	 if(i == n - 1 or v[i + 1].first > pref[i])
   	 {
   	 	while(!idx.empty())
   	 	{
   	 	 ans[idx.top()] = i;
   	 	 idx.pop();
   	 	}
   	 }
   	}
   	for(int i = 0; i < n; i++)
   	{
   	 cout << ans[i] << " ";
   	}
   	cout << '\n';
   }
}