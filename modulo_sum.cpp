#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int q;
   cin >> q;
    vector<int>v;  
   while(q--)
   {
         
      int x , t;
      cin >> x >> t;
      if(x == 1)
      {
         v.push_back(t);
      }
      else
      {
         cout << v[v.size() - t] << '\n';
      }

   }
}