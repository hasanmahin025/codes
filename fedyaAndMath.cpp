#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   string s;
   cin >> s;
   int n  = s.size();
   int last_two = 10 * (s[n - 2] - '0') + (s[n - 1] - '0');
   if(last_two % 4 == 0)
   {
   	cout << 4 << '\n';
   }
   else
   {
   	cout << 0 << "\n";
   }
}