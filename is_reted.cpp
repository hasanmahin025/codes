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
    	 
       int x1 = 1000 , x2 = -1000 , y1 = 1000 , y2 = -1000;

       for(int i = 1; i <= 4; i++)
       {
       	 int x , y;
       	 cin >> x >> y;
       
       	 x1 = min(x1 , x);
       	 x2 = max(x2 , x);
       	 y1 = min(y1 , y);
       	 y2 = max(y2 , y);
       	 
       }
       cout << (x2 - x1) * (y2 - y1) << '\n';

     }
}