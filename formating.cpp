#include<bits/stdc++.h>
using namespace std;
#define int long long
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
  	vector<int>v(n);
  	map<int , int>mp;
  	for(int i = 0; i < n; i++)
  	{
  		cin >> v[i];
  		mp[v[i]]++;
  	}
  	sort(v.begin(),v.end());
  	int total = 0;
  	for(auto u : mp)
  	{
  		int k = u.second;
  		total += k *(k - 1) * (k - 2) / 6;
  		int idx = lower_bound(v.begin(),v.end(),u.first) - v.begin();
  		total += (k * (k - 1) / 2) * idx;
  	}
  	cout << total << '\n';
  }
}