#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    
    	int n , d;
    	cin >> n >> d;
    	vector<int>v(n+1);
    	for(int i = 1; i <= n;i++)
    	{
    		cin >> v[i];
    	}

    	sort(v.rbegin(),v.rend());

    	int l = 1 , r = n;
        int ans = 0,sum = 0;
    	for(int i = 1; i <= n; i++)
    	{
            ans = v[i];

            while(l <= r and ans < d)
            {
            	ans += v[i];
           
            	if(ans > d)
                {
            	sum++;
                }
                
            }
            l++;

            
    	}
         cout << sum << '\n';

}