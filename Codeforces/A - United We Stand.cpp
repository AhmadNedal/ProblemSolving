#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

   cin>>n;
   v.resize(n);
   mx =0 ;
   for(auto&it:v){
      cin>>it;
      mx = max(it,mx);
   }

   sort(v.begin(),v.end());

   if ( mx == v[0]){
       cout << -1 <<endl;
       return ;
   }

   int num=0;
   for(auto&it:v)
        num+=it==mx;


   cout <<n-num<<" "<<num<<endl;


   for(auto it:v)
      if(it!=mx)
         cout<<it<< " ";


   cout<<endl;


   for(int i=n-1;i>-1;--i)
     if(v[i]==mx)
        cout<<mx<<" ";


   cout<<endl;



}

int main(){

    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
