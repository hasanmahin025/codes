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
    	vector<int>v(4);

    	for(int i = 0; i < 4; i++)
    	
    		cin >> v[i];
    	
    	int maxpos = max_element(v.begin(), v.end()) - v.begin();
    	int minpos = min_element(v.begin(), v.end()) - v.begin();

        cout << (maxpos + minpos == 3 ? "YES" : "NO") << '\n'; 	
    }

 
}