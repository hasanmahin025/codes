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
    int x , y , k;
    cin >> x >> y >> k;

    if(x > y)
    {
    	cout << x << '\n';
    	continue;
    }
    int d = y - x;
    int ans = x;
    if(d <= k)
    {
      ans += d;
    }
    else
    {
    	ans += k +(d - k) * 2;
    }
    cout << ans << '\n';
  }

}