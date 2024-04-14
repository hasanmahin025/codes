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
   	int n , a , b;
   	cin >> n >> a >> b;
    if(b < 2 * a)
    {
     cout << (n / 2) * b + (n & 1) * a<<'\n';
    }
    else
    {
    	cout << n * a << '\n';
    }

   }
}