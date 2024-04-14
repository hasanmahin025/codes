#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin >> n;
   for(int i = 1; i <= 26; i++)
   {
      for(int j = 1; j <= 26; j++)
      {
         for(int k = 1; k <= 26; k++)
         {
            if(i + j + k == n)
            {
               string s;
               s.push_back('a' + i - 1);
               s.push_back('a' + j - 1);
               s.push_back('a' + k - 1);
               cout << s << '\n';
                return;
            }
         }
      }
   }
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}