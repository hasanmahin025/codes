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
     if(n & 1)
     {
      cout << "NO\n";
     }
     else
     {
      cout << "YES\n";
      for(int i = 1; i <= n; i += 2)
      {
      	cout << "ABB";
      }
      cout << '\n';
     }
    }
}