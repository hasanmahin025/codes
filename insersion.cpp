#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    int coin[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> coin[i];
    }

    int dp[n + 1][m + 1];

    for(int i = 0; i <= n; i++)
    {
    	dp[i][0] = 1;
    }
    for(int i = 0; i <= m; i++)
    {
    	dp[0][i] = 0;
    }

    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= m; j++)
    	{
    		if(coin[i - 1] > j)
    		{
    			dp[i][j] = dp[i - 1][j];
    		}
    		else
    		{
    			dp[i][j] = dp[i - 1][j] + dp[i][j - coin[i - 1]];
    		}
    	}
    }
    cout << dp[n][m] << '\n';
}
