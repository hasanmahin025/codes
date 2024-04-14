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
  	int arr[n + 1];
  	for(int i = 1; i <= n; i++)
  	{
  		cin >> arr[i];
  	}
  	int ans = 0;

  	for(int i = 1; i <= n; i++)
  	{
  		ans = __gcd(ans , arr[i]);
  	}
  	int cost = 0;
  	if(ans > 1)
  	{
  		if(__gcd(ans , n) == 1)
  		{
  			cost = 1;
  		}
  		else if(__gcd(ans , n - 1) == 1)
  		{
  			cost = 2;
  		}
  		else
  		{
  			cost = 3;
  		}
  	}
  	cout << cost << '\n';
  }
}