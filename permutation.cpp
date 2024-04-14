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
   	int n;
   	cin >> n;
   	int l = 1 , r  = n;
   	for(int i = 1; i <= n; i++)
   	{
   		if(i & 1)
   		{
   			cout << l << ' ';
   			l++;
   		}
   		else
   		{
   			cout << r << ' ';
   			r--;
   		}
   		
   	}
   	cout << '\n';
   }
}