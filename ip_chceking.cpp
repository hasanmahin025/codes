#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(string s)
{
	int n = s.size();
	int decimal = 0;
	int p = 0;
	for(int i = n - 1; i >= 0; i--)
	{
		if(s[i] == '1')
		{
			decimal += (1 << p);
		}
		p++;

	}
	return decimal;
}
bool is_correcet(int a , int b , int c , int d , string binary)
{
	string fist_8_bit = binary.substr(0 , 8);
  
   if(a != binary_to_decimal(fist_8_bit))
   {
   	return false;
   }
  

   string second_8_bit = binary.substr(9 , 8);
   	if(b != binary_to_decimal(second_8_bit))
   	{
   		return false;
   	}
   string third_8_bit = binary.substr(18 , 8);
   	if(c != binary_to_decimal(third_8_bit))
   	{
   		return false;
   	}
   string last_8_bit = binary.substr(27 , 8);
   if(d != binary_to_decimal(last_8_bit))
   {
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
   int a , b , c , d;
   char dot;
   string s;
   cin >> a >> dot >> b >> dot >> c >> dot >> d;
   cin >> s;
   cout << "Case " << ++tc<< ":"; 
  if(is_correcet(a , b , c , d , s))
  {
  	cout << " Yes\n";
  }
  else
  {
  	cout << " No\n";
  }
 }
}