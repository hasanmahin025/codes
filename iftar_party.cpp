#include<bits/stdc++.h>
using namespace std;
#define ll long long
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int cs = 0;
    while(t--)
    {
     int p , l;
     cin >> p >> l;
     int baki = p - l;
     vector<int>v;
     for(int i = 1; (ll)i * i <= baki; i++)
     {
     	if(baki % i == 0)
     	{
     	 if(l < i)
     	 {
     	  v.push_back(i);
     	 }
     	 if(i != baki / i and l < baki / i)
     	 {
     	 	v.push_back(baki / i);
     	 }
     	}
     }
     sort(v.begin(),v.end());
     cout << "Case " << ++cs << ": ";
     if(v.empty())
     {
      cout << "impossible\n";
     }
     else
     {
      for(auto u : v)
      {
      	cout << u << ' ';
      }
      cout << '\n';
     }
    }
}