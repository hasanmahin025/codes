#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int n , m;
   cin >> n >> m;
   int arr[n] , brr[m];
   for(int i = 0; i < n; i++) cin >> arr[i];
   	for(int j = 0; j < m; j++) cin >> brr[j];

   int ans = 0;
   vector<int>ans(n);
   for(int i = 0; i < n; i++)
   {
      for(int j = 0; j < m; j++)
      {
         if(arr[i] < brr[j])
         {
            ans[i] = n - i;
         }
      }
     
   }
   for(auto u : ans)
   {
      cout << u << ' ';
   }

}