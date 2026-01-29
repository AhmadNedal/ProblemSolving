#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

   string s ;
   ll x,y;
   cin>>y>>x>>s;
   n=s.size();

   int one=0,zero=0,num=0;

   for(int i=0;i<n/2;++i){
      if(s[i]=='0'||s[n-i-1]=='0'){
        if(s[i]=='1'||s[n-i-1]=='1'){
            cout << -1 <<endl;
            return;
        }
        s[i]='0',s[n-i-1]='0';
        zero+=2;
      }else if ( s[i]=='1'||s[n-i-1]=='1'){
          if(s[i]=='0'||s[n-i-1]=='0'){
            cout << -1 <<endl;
            return;
        }
        s[i]='1',s[n-i-1]='1';
        one+=2;
      }else
        num+=2;

   }



   if(one>x||zero>y){
        cout << -1 <<endl;
        return;
   }


   one=x-one,zero=y-zero;

   for(int i=0;i<n/2;++i)
      if(s[i]=='?'){
        if(one>1){
            s[i]='1',s[n-i-1]='1';
            one-=2;
        }else {
            s[i]='0',s[n-i-1]='0';
            zero-=2;
        }
      }


   /*
    4 3
    ??010?0
    zero 2 2
    one 1
    num 2
*/


   if (s.size()%2==1){

        if(s[s.size()/2]=='1'){
            if(x%2==0){
                cout << -1 <<endl;
                return ;
            }
            one-=1;
        }
        else if (s[s.size()/2]=='0'){
            if(y%2==0){
                cout << -1 <<endl;
                return ;
            }
            zero-=1;
        }
        else {
            if(x%2==1 ){
                s[s.size()/2]='1';
                one-=1;
            }
            else if(y%2==1){
                s[s.size()/2]='0';
                zero-=1;
            }
            else {
                cout << -1 <<endl;
                return ;
            }
        }
   }



   if ( one ==0 && zero ==0 ) {
        cout << s <<endl;
        return;
   }



   cout << -1 <<endl;


}

int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
