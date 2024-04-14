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
      vector<int>v(n);
      int ans = 0;
      for(int i = 0; i < n; i++)
      {
        int x;
        cin >> x;
        ans = ((ans + x) / x) * x;
       
         
      }
      cout << ans << '\n';
   }
}