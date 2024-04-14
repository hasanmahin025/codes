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
   	int n , m , k;
   	cin >> n >> m >> k;
   	int arr[n] , brr[m];
   	set<int>s1 , s2;
   	for(int i = 0; i < n; i++)
   	{
   	 cin >> arr[i];
   	 s1.insert(arr[i]);
   	}
   	for(int i = 0; i < m; i++)
   	{
   	 cin >> brr[i];
   	 s2.insert(brr[i]);
   	}
   	bool not_found = false;
   	int cnta = 0 , cntb = 0;
   	for(int i = 1; i <= k; i++)
   	{
   	 if(!s1.count(i) and !s2.count(i))
   	 {
   	 	not_found = true;
   	 	break;
   	 }
   	 cnta += s1.count(i);
   	 cntb += s2.count(i);
       cout << cnta << ' ' << cntb << '\n';
   	}
   	if(not_found) cout << "NO\n";
   	else if(min(cnta , cntb ) < k / 2) cout << "NO\n";
   	else cout << "YES\n";
   }
} 