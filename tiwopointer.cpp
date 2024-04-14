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
   for(auto &x : v) cin >> x;

   int ans1 = 1 , ans2 = 1;
   int i = 0 , j = n - 1;
   while(i < n and v[i] == v[i + 1]) 
   {
      i++, ans1++;      
   }
   while(j >= 0 and v[j] == v[j - 1])
   {
      j-- , ans2++;
   }
   if(v[0] == v[n - 1])
   {
    cout << n - min(n , ans1 + ans2) << '\n';
   }
   else
   {
    cout << n - max(ans1 , ans2) << '\n';
   }
  }
}