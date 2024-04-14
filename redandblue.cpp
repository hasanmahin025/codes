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
  	int n , k;
  	cin >> n >> k;
  	string s;
  	cin >> s;
    int ans = 0;
  	for(int i = k; i < n; i++)
  	{
  		if(s[i] == 'W')
  		{
  			s[i] = 'B';
  			ans++;
  		}

  	}
  	cout << ans << '\n';
  }
}