#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  int n;
  cin >> n;
  int arr[n + 1];

  for(int i = 1; i <= n; i++)
  {
  	cin >> arr[i];
  }
  int sum = 0;
  for(int i = 1; i <= n; i++)
  {
  	for(int j = i; j <= n; j++)
  	{
  		if(arr[i] > arr[j])
  		{
  			sum = arr[i] + arr[j]; 
  		}
  	}
  }
  cout << sum << '\n';
}