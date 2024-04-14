#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a , long long b)
{
	int g = __gcd(a , b);

	return  (a * b) / g;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   long long n , a , b , p , q;
   cin >> n >> a >> b >> p >> q;
   int red = n / a;
   int blue = n / b;
   int both = n / lcm(a , b);

   long long ans = 1LL * red * p + 1LL * (blue - both) * q; 
  long long ans1 = 1LL * blue * q + 1LL *(red - both) * p;
  cout << max(ans , ans1) << '\n';
}
