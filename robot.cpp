#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  string a; int b;
  cin >> a >> b;
  int ans = 0;
  for(int i = 0; i < a.size(); i++)
  {
     ans = (ans * 10 + (a[i] - 0)) % b; 
  }
  cout << ans << '\n';
  if(ans == 0)
  {
   cout << "Yes\n";
  }
  else
  {
   cout << "No\n";
  }
}