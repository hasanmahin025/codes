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
   	 int  n;
     cin >> n;
     string t = to_string(n); 
    string	s = "1";

   	for(int i = 1; i < t.size(); i++)
   	{
   		s += '0';
   	}

   	int k = stoi(s);

   	cout << n - k << '\n';
   }
}