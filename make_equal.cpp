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
     long long sum = 0;
     for(int i = 0; i < n; i++)
     {
     	cin >> v[i];
     	sum += v[i];
     }

     int dorkar = 1LL * sum / n;
     long long ace = 0;
     bool ok = 1;
     for(auto x : v)
     {
     	
        if(x + ace < dorkar)
        {
        	ok = 0;
           break;
       }
      ace = x + ace - dorkar;
     }
     cout << (ok ? "YES" : "NO") << '\n';
   }
}