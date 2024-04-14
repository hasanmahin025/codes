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
   	string s;
   	cin >> n;
   	cin >> s;

   	 sort(s , s + n , [](string a , string b){
 
          return a + b < b + a;
    });
     
     for(int i = 0; i < n; i++)
     {
     	cout << s[i];
     }    
     cout << '\n';
    
     
   }

}