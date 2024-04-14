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
   	int n , x;
   	cin >> n >> x;
   	int arr[n + 1];
   	for(int i = 1; i <= n; i++)
   	{
   	 cin >> arr[i];
   	}
   	int mn = arr[1] , ma = arr[1];
   	int ans = 0;
   	for(int i = 1; i <= n; i++)
   	{
   		mn =  min(mn , arr[i]);
   		ma = max(ma, arr[i]);
   		if(ma - x > mn + x)
   		{
   		 ans++;
   		 mn = arr[i];
   		 ma = arr[i];
   		}	
   	}
   	cout << ans << '\n';
   }
   return 0;
}