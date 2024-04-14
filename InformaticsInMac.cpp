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
   	vector<int>v(n),suffix(n),prefix(n);
   	for(int i = 0; i < n; i++)
   	{
   	 cin >> v[i];
   	}
   	set<int> prefixmex , sufixmex;
   	int a = 0 , b = 0;
   	for(int i = 0; i < n; i++)
   	{
   	 
   	  prefixmex.insert(v[i]);
     while(prefixmex.count(a)) a++;
     //cout << "a = " << a << '\n';
     prefix[i] = a;

   	}
   	for(int i = n - 1; i >= 0; i--)
   	{   
   		sufixmex.insert(v[i]);
   		while(sufixmex.count(b)) b++;
   		suffix[i] = b;
   	}

    vector<pair<int,int>>ans;
    for(int i = 0; i + 1 < n; i++)
    {
     if(prefix[i] == suffix[i+1])
     {
     	ans.push_back({1 , i + 1});
     	ans.push_back({i + 2 , n});
     	break;
     }
    }
    if(!ans.size()) 
     cout << -1 << "\n";
      else
       {
         cout << 2 << "\n";
         for(auto &i : ans) cout << i.first << " " << i.second << "\n";
       }
    }
}