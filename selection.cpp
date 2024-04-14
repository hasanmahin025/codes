#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
   cin >> n;
   int arr[n+1];
   for(int i = 1; i <= n; i++)
   {
   	  cin >> arr[i];
   }
  
  for(int i = 1; i <= n; i++)
  {
  	int min_index = i;

  	for(int j = i + 1; j <= n; j++)
  	{
  		if(arr[j] < arr[min_index])
  		{
           min_index = j;
  		}
      swap(arr[i] , arr[min_index]);
  	}

  }


   for(int i = 1; i <= n; i++)
   {
   	 cout << arr[i] << ' ';
   }
   cout << '\n';
   
}