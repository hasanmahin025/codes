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
  	string l , r;
  	cin >> l >> r;
  	while(r.size() < l.size())
  	{
  		r = "0"+r;
  	}
  	while(l.size() < r.size())
  	{
  		l = "0"+l;
  	}
  	bool take9 = false;
  	long long ans = 0;
  	for(int i = 0; i < l.size(); i++)
  	{
  		if(take9)
  		{
  			ans+=9LL;
  			continue;
  		}
  		if(l[i] != r[i])
  		{
  			ans+=(abs(l[i] - r[i]));
  			take9 = true;
  		}
  	}
  	cout << ans << '\n';
  }
}