#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
     cin.tie(0);
   double h , l;
   cin >> h >> l;
   double ans = double(l * l  -  h * h) / 2.0 / h;
   cout << setprecision(15) << ans << '\n';
}
