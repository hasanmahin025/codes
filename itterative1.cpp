#include<bits/stdc++.h>
using namespace std;
#define ll long long
int power(int x , ll n , int mod)
{
  vector<int>pw2(61 , 0);
  pw2[0] =  x % mod;
  int ans = 1 % mod;
  for(int i = 1; i <= 61; i++)
  {
  	pw2[i] = 1LL * pw2[i - 1] * pw2[i - 1] % mod;

  }
  for(int i = 0; i <= 60; i++)
  {

  	if(n >> i & 1)//kth bit is on so is at postion 2^k  
  	{
  	 ans = 1LL * ans * pw2[i] % mod;

  	}

  }
  return ans;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int m = 1e9 + 7;
    // int q; cin >> q;
    int t;
    cin >> t;
  
     int x , n , m;
     while(cin >> x >> n >> m)
     {
      cout << power(x , n , m) << '\n';
     }
}