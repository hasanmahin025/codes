#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+9;
int arr[N],diff[N];
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
    	// for(int i = 1; i <= n; i++)
    	// {
    	// 	arr[i] = arr[i] - arr[i - 1];
    	// }
    	while(u--)
    	{
    		int l , r , value;
    		cin >> l >> r >> value;
    		l++;
    		r++;
    		diff[l]+= value;
    		diff[r +1] += value;

    	}
    	for(int i = 1; i <= n; i++)
    	{
    		arr[i] = arr[i] + diff[i - 1];
    	}
      int q;
      cin >> q;
      while(q--)
      {
      	int x;
      	cin >> x;
      	cout << arr[x] << '\n';
      }
    }

}