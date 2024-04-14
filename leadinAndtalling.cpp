#include<bits/stdc++.h>
using namespace std;
int power(int n , int p , int mod)
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
/*
calulation for Leading 3 Numbers
log10^x = log10^n^k;
=log10^x = klog10^n;
=10^klog10^n = 10^x;
=10^25.36789 = 10^x = (n ^ k) [let a value klog10^n suppose 25.36789];
=10^25.36789
=10^25 + 0.36789
=10^25.36789
=floor of(25.36789) - 25
= .36789
= .36789 * 100
=233.2867
*/
int leading(int n , int k)
{
	double d = k * log10(n); 
	double x = d - floor(d);
	double i = pow(10 , x);
	return floor(i * 100);

}
int trailing(int n , int k)
{
	return power(n , k , 1000);
}
string format(int x)
{
	string x_str = to_string(x);
	while(x_str.size() < 3)
	{
		x_str.insert(x_str.begin() , '0');
	}
	return x_str;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
   	int n , k;
   	cin >> n >> k;
   	cout<< format(leading(n , k)) << "..." << format(trailing(n , k)) << '\n';
   }
}