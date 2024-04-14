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
   	int n , k;
   	cin >> n >> k;
    vector<int>v(k);
   	int cat_position = 0;
   	int ans = 0;
   	for(int i = 0; i < k; i++)
   	{
   	 cin >> v[i];
   	}
   	sort(v.rbegin(),v.rend());
    for(int i = 0; i < k; i++)
    {
     if(cat_position < v[i])
     {
     	cat_position += (n - v[i]);
     	ans++;
     }     
    }
   cout << ans << '\n';
   }
}