#include<bits/stdc++.h>
using namespace std;
const int N =  2e5 + 9;
#define ll long long
ll arr[N] , diff[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  ll n , q;
  cin >> n >> q;
  for(int i = 1; i <= n; i++)
  {
  	cin >> arr[i];
  }
  while(q--)
  {
  	int l , r;
  	cin >> l >> r;
  	diff[l]++;
  	diff[r+1]--;
  }

  for(int i = 1; i <= n; i++)
  {
  	diff[i] += diff[i-1];
  }

  sort(diff + 1 , diff + n + 1);
  
  sort(arr + 1 , arr + n + 1);
  long long ans = 0;
  for(int i = 1; i <= n; i++)
  {
     ans += diff[i] * arr[i];
  }
  cout << ans << '\n';



}