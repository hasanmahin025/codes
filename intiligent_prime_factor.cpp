#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x)
{
	if(x == 1) return false;
	for(int i = 2; i < x; i++)
	{
	  if(x % i == 0)
	  	return false;
	}
	return true;
}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   int tc = 0;
   while(t--)
   {
   	int n;
   	cin >> n;
   	int nm = n;
   	cout << "Case " << ++tc << ": " << nm << " = ";
   	for(int i = 1; i <= n; i++)
   	{
   		if(is_prime(i))
   		{
   			int power = 0;
   			for(int j = 1; j <= n; j++)
   			{
   				int x = j;
   				while(x % i == 0)
   				{
   					power++;
   					x /= i;
   				}
   			}
           if(i != 2) 
   			cout << " * ";
   		cout << i << " (" << power << ")";
   		}
   		
   	}
   	cout << '\n';
   }
}