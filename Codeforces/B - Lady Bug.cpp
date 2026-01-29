#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

   cin>>n ;
   string s,t;
   cin>>s>>t;

   int num1=0,num2=0;

   for(int i=0;i<n;++i){

      if(i&1){

          if(s[i]=='1')
              num1+=1;;

          if(t[i]=='1')
              num2+=1;

      }else{

           if(s[i]=='1')
              num2+=1;

          if(t[i] == '1')
              num1+=1;

        }



   }


   cout<<(num2<=n/2&&num1<=n-n/2?"YES":"NO")<<endl;




}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
