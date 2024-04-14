#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e18;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<ll>numbers;
   ll p2 = 1;
   for(int x = 0; p2 <= N; x++,p2 *= 2)
   {
   	 

   	 ll p3 = 1;
   	 for(int y = 0; p2 * p3 <= N; y++,p3 *= 3)
   	 {
   	   

   	   ll p5 = 1;

   	   for(int z = 0; p2 * p3 * p5 <= N; z++,p5 *= 5)
   	   {
   	   	numbers.push_back(p2 * p3 * p5);
   	   }
   	 }
   }
   sort(numbers.begin(),numbers.end());
  cout << "The 1500'th ugly number is " << numbers[1500 - 1] << ".\n";
   
}