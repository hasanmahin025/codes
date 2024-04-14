#include<bits/stdc++.h>
using namespace std;
int power(int n , int p  , int mod)
{
   int ans = 1 % mod;
   while(p)
   {
      if(p & 1)
      {
         ans = (1LL * ans * n) % mod;
      }
      n = (1LL * n * n) % mod;
      p >>= 1;
   }
   return ans;
}
int inverse(int a , int b)
{
   return power(a , b - 2 , b);
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int a , b , n;
   cin >> a >> b >> n;
   cout << 1LL * a * inverse(b , n) % n<< '\n';
}