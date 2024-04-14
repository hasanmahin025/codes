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
   	int arr[n];
   	for(int i = 0; i < n; i++)
   	{
   	 cin >> arr[i];
   	}
   	if(arr[0] != n and arr[n - 1] != n)
   	{
   	 cout << -1 << '\n';
   	}
   	else
   	{
   		for(int i = n - 1; i >= 0; i--)
   		{
   		 cout << arr[i] << ' ';
   		}
   		cout << '\n';
   	}
   }
}