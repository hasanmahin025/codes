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
      int n , k;
      cin >> n >> k;
      vector<char>s;
      for(char i = 'a'; i <= 'z'; i++)
      {
         s.push_back(i);
      }
      string ans = "";
      for(int i = 0; i < k; i++)
      {
         ans += s[i];
      }
      for(int i = 0; i < n; i++)
      {
         cout << ans;
      }
      cout << '\n';
   }
}