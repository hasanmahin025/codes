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
      int mid = (n + 1) / 2 - 1;
      int ans = mid;

      while(ans < n and v[mid] == v[ans])
        ans++;
      cout << ans - mid << '\n';

      
     }
}