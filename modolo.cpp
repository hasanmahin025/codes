#include<bits/stdc++.h>
using namespace std;
const int  N = 1e5 + 9;
long long arr[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   	int tc = 0;
   while(t--)
   {
   	int n;
   
   	cin >> n;
   	priority_queue<pair<long long , int>>Q;
   	for(int i = 1; i <= n; i++)
   	{
   	 cin >> arr[i];
   	 Q.push({arr[i] , i});
   	}
   	int q;
   	cin >> q;
   	while(q--)
   	{
   	  long long m;
   	  cin >> m;
   	  while(!Q.empty())
   	  {
   	  	auto[x , i] = Q.top();
   	  	if(x < m) break;
   	  	Q.pop();
   	  	Q.push({x % m , i});
   	  }

   	}
   	while(!Q.empty())
   	{
   	  auto[x , i] = Q.top();
   	  Q.pop();
   	  arr[i] = x;
   	}
    cout << "Case "<<++tc<< ":" << '\n';
   	for(int i = 1; i <= n; i++)
   	{
	 cout << arr[i] << (i < n ?' ':'\n');
   	}
   
   }
}