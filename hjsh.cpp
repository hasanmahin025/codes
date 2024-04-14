#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);

     int n , k;
     cin >> n >> k;

     vector<int>v(n);
     for(int i = 0; i < n; i++)
     {
        cin >> v[i];
     }
     sort(v.begin(),v.end());

     int l = 1, r = n - 1;

     long long  ans = 0 , sum = 0;

     for(int i = 0; i < n; i++)
     {
        ans = v[i];
        
        while(l <= r and ans < k)
        {
            ans += v[i];
          

            if(ans > k)
            {
                sum++;
            }
            l++;
        }
     }
     cout << sum << '\n';


}