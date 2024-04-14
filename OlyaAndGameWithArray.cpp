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
   	long long sum = 0;
   	int mn1 = 2e9 , mn2 = 2e9;
   	for(int i = 1; i <= n; i++)
   	{
   		vector<int> v;
   		int m;
   		cin >> m;
   		for(int i = 1; i <= m; i++)
   		{
   			int x;
   			cin >> x;
   			v.push_back(x);
   		}
   		sort(v.begin(),v.end());
   		mn1 = min(mn1 , v[0]);
   		mn2 = min(mn2 , v[1]);
   		sum += v[1];
   	}
   	cout << mn1 + sum - mn2 << '\n';
   }
}