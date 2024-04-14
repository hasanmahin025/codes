#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
int arr[N] , R[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
    	int n , q;
    	cin >> n >> q;

    	for(int i = 1; i <= n; i++)
    	{
    		arr[i] = 0;
    		R[i] = 0;

    	}

    	while(q--)
    	{
    		int l , r;
    		cin >> l >> r;
    		arr[l]++;
    		arr[r+1]--;
    		R[r+1] -= (r - l + 1);

    	}

    	for(int i = 1; i <= n; i++)
    	{
    		arr[i] += arr[i-1];
    		R[i] += R[i-1] + arr[i]; 
    	}
    	
    	for(int i = 1; i <= n; i++)
    	{
    
    		cout << R[i] << ' ';
    	}
    	cout << '\n';
    }

}