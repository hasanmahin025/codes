#include<bits/stdc++.h>
using namespace std;
const int N = 1e8;
bitset<N>is_prime;

void sieve()
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
         for(int j = i * i ; j < N; j += i)
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
  sieve();
  vector<int>primes;
  for(int i = 2; i < N; i++)
  {
    if(is_prime[i])
    {
      primes.push_back(i);
    }
  }
  for(int i = 0; i < primes.size(); i += 100)
  {
   cout << primes[i] << ' ';
  }
}