#include<bits/stdc++.h>
using namespace std;
const int N = 3005;
vector<int>is_prime;
vector<int>prime;
int n;
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
int count_divisor(int n)
{
	int ans = 0;
    if(primegen(n) % n == 0)
    {
    	ans++;
    }
    return ans >= 2;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);

   int lim = N;
   primegen(N);
   cin >> n;
   
  cout << count_divisor(n);
   

  
}