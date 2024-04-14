#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int arr[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
      int n , u;
      cin >> n >> u;
      while(u--)
      {
        int l , r , val;
        cin >> l >> r >> val;
        l++;
        r++;
        arr[l] += val;
        arr[r+1] -= val;

      }

      for(int i = 1; i <= n; i++)
      {
        arr[i] = arr[i] + arr[i - 1];
      }

      int q;
      cin >> q;
      while(q--)
      {
        int x;
        cin >> x;

        cout << arr[x+1] << '\n';
      }
    }

}