#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
int spf[N];
void count_fac()
{
	for(int i = 2; i < N; i++)
    {
    	spf[i] = i;
    }
    for(int i = 2; i < N; i++)
    {
    	if(spf[i] == i)
    	{
    		for(int j = i; j < N; j += i)
    		{
    			spf[j] = min(spf[j] , i);
    		}
    	}
    }
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    count_fac();
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	int ans = 0;
    	while(n > 1)
    	{
    		int p = spf[n];
    		int expotent = 0;
    		while(n % p == 0)
    		{
    			expotent++;
    			n /= p;
    		}
    		ans = max(ans , expotent);
    	}
    	cout << ans << '\n';

    }
}