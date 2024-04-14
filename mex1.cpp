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
   	map<int,int>mp;
   	for(int i = 0; i < n; i++)
   	{
   	 cin >> v[i];
   	 mp[v[i]]++;
   	}
   	vector<int>c;

   	for(auto u : mp)
   	{
   	 if(u.second == 1)
   	 {
   	  c.push_back(u.first);
   	 }
   	}
    sort(c.begin(),c.end());
    if(c.size() >= 2)
    {
     mp[c[1]] = 0;
    }
    int mex = 0;
    while(mp[mex] > 0)
    	mex++;
    cout << mex << "\n";
   }
}