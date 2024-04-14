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
   	int arr[n+1];
   	for(int i = 1; i <= n; i++)
   	{
   	 cin >> arr[i];
   	}
   	sort(arr + 1 , arr + n + 1);
   	int ans = 0;
   	for(int i = 1; i <= n; i++)
   	{
   	 if(arr[i] < i and (i == n or arr[i + 1] > i))
   	 {
   	  ans++;
   	 }
   	}
   	if(arr[1] != 0)
   	{
   	 ans++;
   	}
   	cout << ans << '\n';
   }
}