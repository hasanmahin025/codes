#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
   	int n;
   	cin >> n;
   	vector<int>a(n),b(n);
   	for(int i = 0; i < n; i++)
   	{
   	 cin >> a[i];
   	}
   	for(int i = 0; i < n; i++)
   	{
   	 cin >> b[i];
   	}
   	map<int,int>ma , mb;
      int cons = 0;
      for(int i = 0; i < n; i++)
      {
       cons++;
       if(i == n - 1 or a[i + 1] != a[i])
       {
         if(ma.find(v[i]) == ma.end())
           ma[a[i]] = cons;
         else
         {
          ma[v[i]] = max(ma[a[i]],cons);
         }
         cons = 0;
       }

      
      }
      cons = 0;
      for(int i = 0; i < n; i++)
      {
       cons++;
       if(i == n - 1 or b[i + 1] != b[i])
       {
         if(ma.find(v[i]) == ma.end())
           ma[b[i]] = cons;
         else
         {
          ma[b[i]] = max(ma[b[i]],cons);
         }
         cons = 0;
       }
    }
    
  }
}
