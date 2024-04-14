#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
   	priority_queue<ll>dq;
   	 ll ans = 0;
   	 for(int i = 0; i < n; i++)
   	 {
   	 	int x;
   	 	cin >> x;
   	 	
   	 	if(x == 0 and !dq.empty())
   	 	{
   	 		ans += dq.top();
   	 		dq.pop();
   	 	}
   	 	else
   	 	{
   	 		dq.push(x);
   	 	}
   	 }
   	 
    cout << ans << '\n';

  }
}