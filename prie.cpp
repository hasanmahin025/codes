#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int spj[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int n;
   cin >> n;
   vector<int>ans;
   for(int i = 2; i <= n; i++)
   {
   	if(n % i == 0)
   	{
   		while(n % i == 0)
   		{
   		  ans.push_back(i);
   		  n /= i;
   		}
   	}
   }
   if(n > 1) ans.push_back(n);
   for(auto u : ans)
   {
   	cout << u << ' ';
   }
}