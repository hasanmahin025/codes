#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  int t, cs = 0;
  cin >> t;
  while(t--)
  {
  	long long n;
  	cin >> n;
  	cout << "Case " << ++cs << ": ";
  	if(n & 1)
  	{
  		cout << "Impossible\n";
  	}
  	else
  	{
  	 
       long long m = 1;
       while(n % 2 == 0)
       {
       	 m *= 2;
       	 n /= 2;
       }
       long long a = n;
       cout << a << ' ' << m << '\n';
  	}
    
  }
}