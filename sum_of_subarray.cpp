#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5;
int arr[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  int n;

  cin >> n;
  for(int i = 1; i <= n; i++)
  {
  	cin >> arr[i];
  }
  int sum = 0;
  for(int i = 1; i <= n; i++)
  {
  	sum += arr[i] * i * (n - i + 1);
  }
  cout << sum << '\n';
}