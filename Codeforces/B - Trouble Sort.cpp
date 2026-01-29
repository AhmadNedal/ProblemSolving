#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,k,x,id,mx;
set<ll>s;

//vector<ll>v,v1,v2;

vector<pair<ll,pair<ll,ll>>>v;

vector<int> v4,v3;
map<tuple<ll,ll,ll>,bool> dp;



void solve(){

     cin>>n;
     bool bol1=false,bol3=true,bol2=false;

     ll last=0,n2=n;
     while(n2--){
        cin>>x;
        if(x<last){
            bol3=false;
        }
        last = x;
     }


     bool b=false;
     while(n--){
         cin>>b;
         if(b)
            bol1= true;
         else
            bol2=true;
     }


     cout << ((bol1&&bol2)||bol3?"YES":"NO")<<endl;





}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    cin>>_;
    while(_--)
        solve();

    return 0;
}
