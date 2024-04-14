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
   int x , y , n;
   cin >> x >> y >> n;
   int max_rem = n - n % x;
   if(max_rem + y <= n)
   {
      cout << max_rem + y <<  '\n';
   }
   else
   {
      cout << max_rem - x + y << '\n';
   }
  }
}