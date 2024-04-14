#include<bits/stdc++.h>
using namespace std;
void leading(int n , int k)
{
  double d = k * log10(n);
  double x = d - floor(d);
  cout << x << '\n'; 

}
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
  leading(3 , 2);
}