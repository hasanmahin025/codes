#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
bool prime[N];
void is_prime()
{
	prime[1] = false;
	for(int i = 2; i < N; i++)
	{
		prime[i] = true;
	}
 for(int i = 2; i < N; i++)
 {
	for(int j = i + i; j < N; j += i)
	{
		prime[j] = false;
	}
 }
}
bool has_digit_zero(int x)
{
	while(x > 1)
	{
      if(x % 10 == 0)
      	return true;
      x /= 10;
	}
	return false;
}
bool is_valid(int x)
{
	if(!prime[x])
	{
		return false;
	}
	if(has_digit_zero(x))
	{
		return false;
	}
	string s = to_string(x);
	int len = s.size();
	for(int i = 0; i < len; i++)
	{
		string suffix = s.substr(i);

		int p = stoi(suffix);

		if(!prime[p])
		{
			return false;
		} 
	}
	return true;
}
bool valid[N];
int cnt[N];
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   is_prime();
  for(int i = 0; i < N; i++)
  {
  	valid[i] = is_valid(i);
  }
  cnt[0] = 0;
  for(int i = 1; i < N; i++)
  {
  	cnt[i] = cnt[i - 1] + valid[i];
  }
  int t;
  cin >> t;
  while(t--)
  {
  	int n;
  	cin >> n;
  	cout << cnt[n] << '\n';
  }
   
}