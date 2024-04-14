#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
bool is_prime[N];
int is_perfect(long long x)
{
	long long s = sqrtl(x);
	if(1LL * s * s == x)
	{
	 return s;
	}
	else
	{
	 return 0;
	}
}
void seive()
{
  is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i < N; i++) {
    if (is_prime[i]) {
      for (int j = i + i; j < N; j += i) {
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
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++)
   {
   	long long x;
   	cin >> x;
   	long long s = is_perfect(x);
     if(is_prime[s])
     {
       cout << "YES\n";
     }
     else
     {
       cout << "NO\n";
     }
   
   }
}