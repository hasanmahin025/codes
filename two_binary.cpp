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
   	string a , b;
   	cin >> a;
   	cin >> b;

   	bool ok = 0;

   	int n = a.size();

   	for(int i = 0; i < n; i++)
   	{
   		if(a[i] == '0' and a[i + 1] == '1' and b[i] == '0' and b[i + 1] == '1')
   		{
   			ok = true;
   		}
   	}
    
    cout << (ok ? "YES" : "NO") << '\n';

   }
}