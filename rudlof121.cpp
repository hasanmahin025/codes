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

   	for(auto &x : v) cin >> x;

   		for(int i = 0; i < n - 2; i++)
   		{
   		  v[i + 1] -= 2 * v[i];
   		  v[i + 2] -= v[i];
   		  v[i] -= v[i];

   		}
   		if(count(v.begin(),v.end(), 0 ) == n)
   		{
   			cout << "Yes\n";
   		}
   		else
   		{
   		 cout << "No\n";
   		}
   }
}