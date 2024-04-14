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
  	int m = n * (n - 1) / 2;
  	vector<int>v;
  	for(int i = 0; i < m; i++)
  	{
  	  int x;
  	  cin >> x;
  	  v.push_back(x);
  	}
  	sort(v.begin(),v.begin() + m);

  	for(int i = 0; i < m; i+=--n)
  	{
  	 cout << v[i] << ' ';
  	}
  	cout << 1000000000 << '\n';
  }
}