#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
vector<int>spj(N);
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int n;
   cin >> n;
   if(n % 2 == 0)
   {
   	 cout << n / 2 << '\n';
   	 for(int i = 1; i <= n / 2; i++)
   	 {
   	 	cout << 2 << ' ';
   	 }
   	 cout << '\n';
   }
   else
   {
   	cout << n / 2 << '\n';
   	for(int i = 1; i < n / 2; i++ )
   	{
   	 cout << 2 << ' ';
   	}
   	cout << 3 << '\n';
   }
  
}