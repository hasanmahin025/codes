#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+9;
int arr[N];
int n , d;

int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
           
       cin >> n >> d;
     for(int i = 1; i <= n; i++)
      {
           	cin >> arr[i];
      }

      sort(arr + 1 , arr + n + 1);
     
    int ans  = 0;

    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= n; j++)
    	{
    		if(arr[i] + arr[j] >= d)
    			ans++;
    	}

    }
    cout << ans << '\n';

}