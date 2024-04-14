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
   	int n , k , d;
   	cin >> n >> k >> d;
   	set<int>st;
   	for(int i = 1; i <= n; i++)
   	{
   		int x;
   		cin >> x;
   		st.insert(x);
   	}
   	int cnt = 0;
   	for(auto u : st)
   	{
   		if(u > d - n)
   		{
   			cnt++;
   		}
   	}
   	cout << cnt << '\n';
   }
}