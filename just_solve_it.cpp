#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 3;
int spf[N];
int d[N];
int sumd[N];
void divisor()
{
  for(int i = 1; i < N; i++)
  {
  	for(int j = i; j < N; j += i)
  	{
  	  d[j]++;
  	  sumd[j] += i;
  	}
  }
 
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    divisor();
   for(int i = 2; i < N; i++)
   {
   	spf[i] = i;
   }
   for(int i = 2; i < N; i++)
   {
   	for(int j = i; j < N; j += i)
   	{
   	 spf[j] = min(spf[j] , i);
   	}
   }
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++)
   {
   	 int x;
   	 cin >> x;
   	 int dd = x;
   	 cout << spf[x] << ' ';
   	 int gratest_prime_factor = 0;
   	 int numbers_of_factors = 0;
   	 set<int>st;
   	 int numbers_of_distinct = 0;
   	 while(x > 1)
   	 {
   	 	int p = spf[x];
        st.insert(p);
        numbers_of_factors++;
   	 	gratest_prime_factor = max(gratest_prime_factor , p);
   	 	x /= p;
   	   numbers_of_distinct = st.size();

   	 }
   	 cout << gratest_prime_factor << ' ';
   	 cout << numbers_of_distinct << ' ';
   	 cout << numbers_of_factors << " ";
     cout << d[dd] << ' ';
     cout << sumd[dd] << ' ';
     cout << "\n";

   }
}