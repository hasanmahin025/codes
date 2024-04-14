#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int tc = 0;
   int t;
   cin >> t;
   while(t--)
   {
   	string s; int n; cin >> s >> n;
   	int ans = 0;
   	if(s[0] == '-')
   	{
   	  s.erase(s.begin());
   	}
   	n = abs(n);
   	for(auto c : s)
   	{
   		int d = c - '0';
   	  ans = (1LL * ans * 10 % n + d) % n;
   	}
   	cout << "Case "<< ++tc << ": ";
   	if(ans == 0)
   	{
   	 cout << "divisible\n";
   	}
   	else
   	{
   	 cout << "not divisible\n";
   	}
   }
}