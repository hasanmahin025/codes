#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
  {
  int n , p;
  cin >> n >> p;
  int ans = p;
  vector<pair<int , int>>v;
  vector<int> arr(n) , brr(n);
  for(int i = 0; i < n; i++)
  {
  	cin >> arr[i];
  }
  for(int i = 0; i < n; i++)
  {
  	cin >> brr[i];
  	v.push_back({min(p , brr[i]) , arr[i]});
  }
  sort(v.begin(),v.end());
  
  int person = n - 1;

  for(int i = 0; i < n - 1; i++)
  {
  	ans += min(v[i].second , person) * v[i].first;
  	person -= min(person , v[i].second); 
  }
  cout << ans << '\n';
}
}