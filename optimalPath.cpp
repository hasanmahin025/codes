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
  	int n , m;
  	cin >> n >> m;
  	if(__gcd(n , m) == 1)
  	{
  		cout << "Finite\n";
  	}
  	else
  	{
  		cout << "Infinite\n";
  	}
  }

}