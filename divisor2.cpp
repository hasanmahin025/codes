#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int d[N+9];
bool ok[N];
void divisor()
{
  for(int i = 1; i < N; i++)
  {
    for(int j = i; j < N; j += i)
    {
      d[j]++;
    }
  }
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    divisor();

    for(int i = 1; i <= N; i++)
    {
      ok[i] = true;
    }
    for(int i = 1; i <= N; i++)
    {
      for(int j = i; j <= N; j += i)
      {
        if(d[j] % d[i] != 0)
        {
          ok[i] = false;
        }
      }
    }
    vector<int>ans;
    for(int i = 1; i <= N; i++)
    {
      if(d[i] > 3 and ok[i])
      {
        ans.push_back(i);
      }
    }
   for(int i = 107; i < ans.size(); i += 108)
   {
    cout << ans[i] << '\n';
   }
  
}