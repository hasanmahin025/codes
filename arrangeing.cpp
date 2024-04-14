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
  	string s1 , s2;
  	cin >> s1 >> s2;

  	int add = 0 , remove = 0;

  	for(int i = 0; i < n; i++)
  	{
  		if(s1[i] == '1' and s2[i] == '0')
  		{
  			remove++;
  		}
  		if(s1[i] == '0' and s2[i] == '1')
  		{
  			add++;
  		}
  	}

  	cout << max(add , remove) << '\n';
  }

}