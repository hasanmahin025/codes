#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int n;
   cin >> n;
   vector<int>d(100);
   for(int i = 1; i <= n; i++)
   {
   	for(int j = i; j <= n; j +=i )
   	{
   	 d[j]++;
   	}
   }
   for(int i = 1; i <= n; i++)
   {
   	cout << d[i] << ' ';
   }
}