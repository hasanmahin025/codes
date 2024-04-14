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
    string s;
    cin >> s;
    int ans = 0;
     ans = s.find("**");
    if(ans == -1)
    {
      ans = n;
    }
    int ans1 = count(s.begin() , s.begin() + ans , '@');
    cout << ans1 << '\n';
  }
}