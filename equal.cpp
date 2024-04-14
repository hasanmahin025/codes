#include<bits/stdc++.h>
using namespace std;
#define i28 __int128
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--)
   {
   	 string a , b , c , d;
   	 cin >> a >> b >> c >> d;
     i28 A = stoi(a);
     i28 B = stoi(b);
     i28 C = stoi(c);
     i28 D = stoi(d);

     if(i28(A * D) == i28(B * C))
     {
       cout << "Equal\n";
     }
     else
     {
      cout << "Not Equal\n";
     }


   }
}