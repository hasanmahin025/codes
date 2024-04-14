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
  	int ans = INT_MAX;
  	int segment = 0;
    int b = 0 , w = 0;
  	for(int i = 0; i < s.size(); i++)
  	{
  		segment++;
  		if(s[i] == 'W')
  		{
  			w++;
  		}
  		if(s[i] == 'B')
  		{
  			b++;
  		}

  		if(segment >= k)
  		{
  			if(s[i - k] == 'B')
  			{
  				b--;
  			}
  			if(s[i - k] == 'W')
  			{
  				w--;
  			}
  			ans = min(ans , w);
  			
  			segment--;
  		}
  	}
  	cout << ans << '\n';
  	
  }
}