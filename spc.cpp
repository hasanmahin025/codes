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
   
     int ans = (n - 365);

     //cout << ans << '\n';
   	 
   	 if(ans < 0)
   	 {
   	 	cout << ans + 365 << '\n';
   	 }
   	 else
   	 {
   	 	cout << ans << '\n';
   	 }

   }
}