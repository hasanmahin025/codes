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
  	vector<int>v(n);
  	for(int i = 0; i < n; i++)
  	{
  		cin >> v[i];
  	}
  	for(int i = 0; i < n; i++)
  	{
  		v[i] -= i;
  	}
   
   // for(auto u : v)
   // {
   // 	cout << u << ' ';
   // }
   // cout << '\n';
   
  	int l = *max_element(v.begin(),v.end());
  	int r = *min_element(v.begin(),v.end());

  	cout << (l - r <= 2 ? "YES" : "NO") << '\n';
  }
}