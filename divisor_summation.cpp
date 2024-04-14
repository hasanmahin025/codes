#include<bits/stdc++.h>
using namespace std;
const int N = 5e6;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<long long>divs(N);
    for(int i = 1; i <= N; i++)
    {
       for(int j = i; j <= N; j += i)
       {
       	divs[j] += i;
       }
    }
   int t;
   cin >> t;
   while(t--)
   {
   	int n;
   	cin >> n;
   	cout << divs[n] - n << '\n';
   }
}