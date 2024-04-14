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
  	string s;
  	cin >> n >> s;

  	string t = s;

  	sort(t.begin() , t.end());

  	s.erase(unique(s.begin() , s.end()) , s.end());

  	t.erase(unique(t.begin() , t.end()) , t.end());

  	if(s.size() == t.size())
  	{
  		cout << "Yes\n";
  	}
  	else
  	{
  		cout << "No\n";
  	}
  }
}