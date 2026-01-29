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

     cin>>n>>m;

     if(m>n){
         cout << -1 <<endl;
         return;
     }



     int i=1;
     while(true){
        if(m*i<((n+1)/2))
            i+=1;
        else
            break;
     }

     m*=i;


     cout <<m<<endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    //cin>>_;
    while(_--)
        solve();

    return 0;
}
