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
   	vector<pair<int , int>>p(n);
   	for(auto &x : p)
   	{
   		cin >> x.first;
   	}
   	for(auto &x:p)
   	{
   		cin >> x.second;
   	}
   	sort(p.begin(),p.end());
   	for(auto u : p)
   	{
   		cout << u.first << ' ';
   	}
   	cout << '\n';
   	for(auto u : p)
   	{
   		cout << u.second <<' ';
   	}
   	cout << '\n';
   }
}