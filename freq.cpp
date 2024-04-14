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
    vector<int>freq(26);
    string s;
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < 26; j++)
    	{
    	  if(freq[j] == v[i])
    	  {
    	  	s.push_back('a' + j);
    	  	freq[j]++;
    	  	break;
    	  }
    	}
    }
    cout << s << '\n';
  }
}