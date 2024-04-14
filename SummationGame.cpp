#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define ll long long int

int main(){
   Faster;
   int t;                  cin>>t;
   while(t--){
      int n,k,x;           cin>>n>>k>>x;
      vector<ll> a(n);

      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      sort(a.begin(),a.end());

      vector<ll> pref(n,0);
      pref[0]=a[0];
      for(int i=1;i<n;i++){
         pref[i]=pref[i-1]+a[i];
      }

      ll ans=LLONG_MIN;
      for(int remove=0;remove<=k;remove++){
         if(remove==n){
            ans=max(ans,0LL);
            break;
         }
         ll afterRemoval=pref[n-1-remove];
         
         int canNegify=min(n-remove,x);
         int lastRemainingIndex=n-1-remove;
         int negifiedTill=max(0,lastRemainingIndex-canNegify+1);

         ll gain;
         ll negifiedWindowSum;
         if(negifiedTill==0){
            negifiedWindowSum = pref[lastRemainingIndex];
            gain= -negifiedWindowSum;
         }
         else{
            negifiedWindowSum=pref[lastRemainingIndex]-pref[negifiedTill-1];
            gain = pref[negifiedTill-1]-negifiedWindowSum;
         }

         ans=max(ans,gain);
      }


      cout<<ans<<endl;

   }
   return 0;
}
