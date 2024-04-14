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
    	int n;
    	cin >> n;
    	vector<int>v(n*2);
    	for(int i = 0; i < n*2; i++)
    	{
    		cin >> v[i];
    	}
    	sort(v.begin(),v.end());

    	vector<pair<int,int>>p;
    	for(int i = 0; i < n; i++)
    	{
    		p.push_back(make_pair(v[i] , v[2*n-1-i]));
    	}
    	
    	int ans = 0;
    	for(int i = 1; i < n; i++)
    	{
    		ans += abs(p[i-1].first - p[i].first);
    		ans += abs(p[i-1].second - p[i].second);
    	}

    	cout << ans << '\n';
    	for(auto u : p)
    	{
    		cout << u.first << ' '<< u.second << '\n';
    	}
    }

}