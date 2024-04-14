#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int spj[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   for(int i = 2; i <= N; i++)
   {
     spj[i] = i;
   }
   for(int i = 2; i <= N; i++)
   {
   	for(int j = i; j <= N; j += i)
   	{
   	  spj[j] = min(spj[j],i);
   	}
   }
   int q;
   cin >> q;
   while(q--)
   {
   	int n;
   	cin >> n;
   	vector<int>ans;
   	while(n > 1)
   	{
   	  ans.push_back(spj[n]);
   	  n /= spj[n];	
   	}
   	for(auto u : ans)
   	{
   	 cout << u << ' ';
   	}
   }
}