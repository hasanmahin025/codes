#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 9;
 ll arr[N] , diff[N] , op[N];
int l[N] , r[N] , d[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , m ,k;
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++)
    {
    	cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
    	diff[i] = arr[i] - arr[i - 1];
    }
    
    for(int i = 1; i <= m; i++)
    {
    	cin >> l[i] >> r[i] >> d[i];
	
    }
    while(k--)
    {
    	int l , r;
    	cin >> l >> r;
    	op[l]++;
     	op[r+1]--;   
    }

    for(int i = 1; i <= m; i++)
    {
    	op[i] += op[i-1];

    	
    }
   

    for(int i = 1; i <= m; i++)
    {
    	diff[l[i]] += d[i] * op[i];
    	diff[r[i]+1] -= d[i] * op[i];

    	
    }
    for(int i = 1; i <= n; i++)
    {
    	diff[i] += diff[i-1];
    	cout << diff[i] << ' ';
    }
    cout << '\n';

}