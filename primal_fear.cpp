#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
bool is_prime[N];
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
}
bool has_digit_zero(int x)
{
   while(x)
   {
      if(x % 10 == 0)
      {
         return true;
      }
      x /= 10;
   }
   return false;
}
bool is_valid(int x)
{
   if(!is_prime[x])
   {
      return false;
   }
   if(has_digit_zero(x))
   {
      return false;
   }
   string suffix = to_string(x);
   int sz = suffix.size();
   for(int i = 0; i < sz; i++)
   {
      string s = suffix.substr(i);
      int suff = stoi(s);
      if(!is_prime[suff])
      {
         return false;
      }
   }
   return true;
}
int valid_cnt[N];
bool valid[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  seive();
  for(int i = 1; i < N; i++)
  {
   valid[i] = is_valid(i);
  }
  for(int i = 1; i < N; i++)
  {
   valid_cnt[i] = valid_cnt[i - 1] + valid[i];
  }
  int t;
  cin >> t;
  while(t--)
  {
   int n;
   cin >> n;
   cout << valid_cnt[n] << '\n';
  }
  
}