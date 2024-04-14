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
      for(int i = 0; i < n; i++)
      {
         cin >> v[i];
      }
      sort(v.begin(),v.end());
      v.resize(unique(v.begin(),v.end()) - v.begin());
      int cnt = 0 , ans = 0;
      int s = v.size();
      int l = 0;
      for(int i = 0; i < s; i++)
      {
         while(l < s and v[i] - v[cnt] >= n)
         {
            cnt++;
            l++;
         }
         ans = max(ans , i - cnt + 1);
      }
      cout << ans << '\n';
     
   }
}