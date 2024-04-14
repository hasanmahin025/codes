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
    	int n , u;
    	cin >> n >> u;
      int arr[n];
      for(int i = 0; i < n; i++) arr[i] = 0;
    	while(u--)
    	{
    		int l , r , val;
    		cin >> l >> r >> val;
        arr[l] += val;
        arr[r+1] -= val;
         
    	}


    	for(int i = 1; i < n; i++)
    	{
    		arr[i] = arr[i - 1] + arr[i];
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