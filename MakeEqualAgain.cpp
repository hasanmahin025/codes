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
   	for(auto &x : v) 
   		cin >> x;

   	int l = 0;

   	map<int,int>mp;

   	mp[v[l]]++;
    //suffix
   	while(l + 1 < n and v[l +l] == v[1])
   	{
   	 mp[v[l + 1]]++;
   	 l++;
   	}

   	int r = n - 1;
   	mp[v[r]]++;
    //prefix
   	while(r - 1 >= 0 and v[r] == v[r - 1])
   	{
   	 mp[v[r - 1]]++;
   	 r--;
   	}

   	if(l>=r)
   	{
   	 cout << 0 << '\n';
   	}
   	else if(v[l] != v[r])
   	{
   	 if(mp[v[l]] > mp[v[r]])
   	 {
   	  cout << n - mp[v[l]] << '\n';
   	 }
   	 else
   	 {
   	 	cout << n - mp[v[r]] << '\n';
   	 }
   	}
   	else
   	{
   		cout << n - mp[v[r]] << '\n';
   	}

   }
   return 0;
}