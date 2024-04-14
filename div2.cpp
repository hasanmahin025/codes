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
      vector<int>v;
      pair<int , int>p;
      int l = INT_MIN , r = INT_MAX;
      for(int i = 1; i <= n; i++)
      {
          int a , b;
          cin >> a >> b;
          p = make_pair(a , b);

          if(p.first == 1)
          {
            l = max(l , p.second);
            //cout << "l = " << l << '\n';
          }
          else if(p.first == 2)
          {
            r = min(r , p.second);
            //cout << "R = " << r << '\n';
          }
          else
          {
            v.push_back(p.second);
          }
         
      }

      int ans = (r - l) + 1;
      //cout << "ans = " << ans << '\n';

      for(auto i : v)
      {

          if(i >= l and i <= r)
          {

              ans--;
          }
      }
         cout << max(0 , ans) << '\n';
    }

}
