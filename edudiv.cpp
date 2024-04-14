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
  	 
  	int l = 0;
   int r = n - 1;
   while(v[l] == 0)
   {
    l++;
   }
   while(v[r] == 0)
   {
    r--;
   }
   //cout << l << ' ' << r << '\n';
  	int ans = count(v.begin() + l , v.begin() + r , 0);
   cout << ans << "\n";

  }
}