#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 9 , mod = 1e9 + 7;
bool is_prime[N];
vector<int>prime;
void seive()
{
    is_prime[1] = false;
    for(int i = 2; i < N; i++)
    {
    	is_prime[i] = true;
    }
    for(int i = 2; i < N; i++)
    {
    	if(is_prime[i])
    	{
    	  for(int j = i + i; j < N; j += i)
    	  	{
    	  		is_prime[j] = false;
    	  	}
    	}
    }
    for(int i = 2; i < N; i++)
    {
     if(is_prime[i])
     	prime.push_back(i);
    }
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    seive();
   int t;
   cin >> t;
   while(t--)
   {
   	int n;
   	cin >> n;
   	int total = 1;
   	 for(auto p : prime)
   	 {
   	 	if(p > n)break;
   	 	int e = 0;
   	 	for(int i = p; i <= n; i += p)
   	 	{
   	 		int x = i;
   	 		while(x % p == 0)
   	 		{
   	 			e++;
   	 			x /= p;
   	 		}
   	 	}
   	 	 total = 1LL * total * (e + 1)  % mod << '\n'; 
   	 }
    cout << total << "\n";
    
   }
}