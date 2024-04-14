#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
   string plain_text;
   cin >> plain_text;
   int encrp_key;
   int decyp_key;
   cin >> encrp_key >> decyp_key;

   int n = plain_text.size();

   vector<int>plainText(n) , cyperText(n) , orginal(n);
   vector<int>key(n);
   vector<char>c(n) , plain(n);
   for(int i = 0; i < n; i++)
   {
   	 plainText[i] = plain_text[i] - 'A' + 1;
   }
   cout << "plainText orginal from\n";
   for(int i = 0; i < n; i++)
   {
   	cout << plainText[i] << ' ';
   }
   cout << endl;
   for(int i = 0; i < n; i++)
   {
   	key[i] = plainText[i] + encrp_key % 26;
   }
   cout << "plainText key from\n";
   for(int i = 0; i < n; i++)
   {
   	cout << key[i] << ' ';
   }
   cout << '\n';

   for(int i = 0; i < n; i++)
   {
     	if(c[i] = key[i] + 65 - 1 > 90)
     	{
          c[i] = key[i] + 65 - 1 - 26;
     	}
     	else
     	{
     		c[i] = key[i] + 65 - 1;
     	}
   }
   cout << "cyperText Encryption text\n";
   for(int i = 0; i < n; i++)
   {
   	cout << c[i];
   }
   cout << endl;

   for(int i = 0; i < n; i++)
   {
   	orginal[i] = key[i] - decyp_key % 26;
   }
   cout << "plainText orginal from\n";
   for(int i = 0; i < n; i++)
   {
   	cout << orginal[i] << ' ';
   }
   cout << endl;
  
   for(int i = 0; i < n; i++)
   {
   	 plain[i] = plainText[i] + 65 - 1;
   }

   cout << "orginal from of Decryption\n";

   for(int i = 0; i < n; i++)
   {
   	cout << plain[i];
   }


}