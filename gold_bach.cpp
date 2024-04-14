#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 9;
bool is_prime[N];
void seive()
{
	is_prime[1] = false;
	for(int i = 2; i < N; i++)
	{
		is_prime[i] = true;
	}
	for(int i = 2; i * i < N; i++)
	{
        if(is_prime[i])
        {
          for(int j = i + i; j < N; j += i)
          {
          	is_prime[j] = false;
          }
        }
	}
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);

    seive();
    vector<int>prime;
    for(int i = 1; i < N; i++)
    {
    	if(is_prime[i])
    		prime.push_back(i);
    }
   int t , tc = 0;
   cin >> t;
   while(t--)
   {
   	int n;
   	cin >> n;
   	int ans = 0;
   	for(auto x : prime)
   	{
   		if(x > n) break;
   		int b = n - x;
   		if(is_prime[b] and x <= b)
   		{
   		 ans++;
   		}
   	}
   	cout << "Case " << ++tc << ": " << ans << '\n';
   }
}