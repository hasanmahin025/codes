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
  	vector<int>v;
  	vector<bool>used(n + 1 , false);
  	bool ok = 0;
    int cur = 1;
     for(int i = 2; i <= n; i++)
     {
     	if(!used[i])
     	{
     		v.push_back(i);
     		used[i] = true;
           cur = i;
          while(cur * 2 <= n)
          {
          	v.push_back(cur * 2);
          	used[cur * 2] = true;
          	cur *= 2;
          }

     	}
     }
     cout << 1 << ' ';
  	for(auto u : v)
  	{  

  		cout << u << ' ';
  	}
  	cout << '\n';
  }
}