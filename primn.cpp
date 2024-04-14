#include<bits/stdc++.h>
using namespace std;
const int N = 1e9;
vector<int>is_prime;
vector<int>prime;
void primegen(int n)
{
	for(int i = 3; i <= n; i += 2) is_prime[i] = 1;
		int sq = sqrt(n);
	for(int i = 3; i <= sq; i += 2)
	{
		if(is_prime[i] == 1)
		{
			for(int j = i * i; j <= n; j += (i + i))
			{
				is_prime[j] = 0;
			}
		}
	}
	is_prime[2] = 1;
	prime.push_back(2);
	for(int i = 3; i <= n; i += 2)
	{
      if(is_prime[i] == 1)
      	prime.push_back(i);
	}
 
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int lim = 1e9;
   primegen(N);
    for(int i = 0; i < prime.size(); i += 500)
    {
    	cout << prime[i] << '\n';
    }
}