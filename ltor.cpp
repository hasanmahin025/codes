#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  string s;
  cin >> s;
  int n = s.size();
  string ans = "";
  for(int i = 0; i < n; i++)
  {
  	if(s[i] == 'c' and s[i + 1] == 'j' and s[i + 2] == 'b')
  	{
  		ans += "cjb,";
  		i += 2;
  	}
  	else
  	{
  		ans += s[i];
  	}
  }
  cout << ans << '\n';
}