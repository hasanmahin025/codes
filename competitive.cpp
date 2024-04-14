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
  	int n , m;
  	cin >> n >> m;
  	int arr[n + 1][m + 1];
  	for(int i = 1; i <= n; i++)
  	{
  	 for(int j = 1; j <= m; j++)
  	 {
  	 	cin >> arr[i][j];
  	 }	
  	}
  	map<int , int> d1 , d2;
  	for(int i = 1; i <= n; i++)
  	{
  		for(int j = 1; j <= m; j++)
  		{
  			d1[i - j] += arr[i][j];
  			d2[i + j] += arr[i][j];
  		}
  	}
  	int ans = 0;
  	for(int i = 1; i <= n; i++)
  	{
  	 for(int j = 1; j <= m; j++)
  	 {
  	 	ans = max(ans , d1[i - j] + d2[i + j] - arr[i][j]);
  	 }
  	}
  	cout << ans << '\n';
  }
}