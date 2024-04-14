#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
     cin.tie(0);
   int t , cs = 0;
   cin >> t;
   while(t--)
   {
   	int n , m;
   	cin >> n >> m;
    int ans = 0 , cur = 0;
   	while(1)
   	{
   		cur = (cur * 10 + m) % n;
        ans++;
        if(cur % n == 0) break;
   	}
   	cout<<"Case "<< ++cs <<": " << ans << '\n';
   }
}