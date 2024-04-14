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
        int n , k , x;
        cin >> n >> k >> x;
        int arr[n+1];
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        sort(arr + 1 , arr + n + 1);
        int pref[n + 1];
        for(int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + arr[i];
        }
        int ans = INT_MIN;
       for(int i = 1; i <<= k; i++)
       {
        ans = max(ans , pref[n] - 2  * pref[min(i + x , n)] + pref[i]);
       }

        cout << ans << '\n';
    }

}
