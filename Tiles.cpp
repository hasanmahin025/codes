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
   	int arr[n + 1];
   	for(int i = 1; i <= n; i++)
   	{
   	 cin >> arr[i];
   	}
   	bool ok = 0;
   	sort(arr + 1 , arr + n + 1);
   	for(int i = 1; i < n; i++)
   	{
   	 for(int j = i + 1; j <= n; j++)
   	 {
   	 	if(arr[j] - arr[i] <= 1)
   	 	{
   	 		ok = 1;
   	 		break;
   	 		
   	 	}
   	 }
   	}
   	cout << (ok ? "YES" : "NO") << '\n';
   }
}