#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
   vector<int>v;
   for(int i = 1; i * i <= n; i++)
   {
   	cout <<"i = " << i << '\n';
   	if(n % i == 0)
   	{
   	  v.push_back(i);
   	  if(n / i != i) v.push_back(n / i);
   	}

   }
   sort(v.begin(),v.end());
   for(auto u : v)
   	{
   	 cout << u << ' ';
   	}
}