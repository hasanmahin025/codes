#include<bits/stdc++.h>
using namespace std;
bool call(int n , int m)
{
	if(n == m) return true;
	if(n % 3!= 0) return false;
	return (call(n / 3 , m) or call(2 * (n / 3), m));
}
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

    if(call(n , m))
    {
   	cout << "YES\n";
    }
    else
    {
   	cout << "NO\n";
    }
  }
}