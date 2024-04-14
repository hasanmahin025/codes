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
      int x = 2 * n;
      vector<int>v;
      for(int i = 0; i < x; i++)
      {
         int x;
         cin >> x;
         v.push_back(x);
      }
      sort(v.begin(),v.end());
       int minn = v[0];
       int ans = 0;
      for(int i = 1; i < x;)
      {
        ans += min(minn , v[i]);
        minn = v[i + 1];
        i += 2;

      }
      cout << ans << "\n";
   }
}