#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n , m;
    cin >> n >> m;
   vector<int>(cnt , 0);
    for(int i = 0; i < n; i++)
    {
    	int x;
    	cin >> x;
    	cnt[x]++;
    }
    for(int i = 0; i < m; i++)
    {
    	int x;
    	cin >> x;
    	cnt[x]++;
    }
    bool ok = 1;
    
    // for(auto u : cnt)
    // {
    // 	cout << u << '\n';
    // }

}