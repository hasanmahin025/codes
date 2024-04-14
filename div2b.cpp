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
   	vector<int>a(n) , b(n);
   	for(int i = 0; i < n; i++)
   	{
   		cin >> a[i];
   	}
   	for(int i = 0; i < n; i++)
   	{
   		cin >> b[i];
   	}
   	sort(a.begin(), a.end());
   	sort(b.begin(),b.end());

   	for(auto u : a)
   	{
   		cout << u << ' ';
   	}
   	cout << '\n';
   	for(auto u : b)
   	{
   		cout << u << ' ';
   	}
   	cout << '\n';
   }
}