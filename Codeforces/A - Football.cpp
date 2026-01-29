#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,k,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;


bool can(ll num) {
    ll sum=0;

    for(int i=n/2;i<n;++i)
        if(v[i]<num)
            sum+=(num-v[i]) ;

    return sum<=k ;

}


void solve(){

    cin>>n;
    map<string,int>m;
    string s;

    while(n--){
        cin>>s;
        m[s]+=1;
    }

    int num=0;
    string ans ="";

    for(auto it : m )
        if (it.second > num ){
            ans = it.first;
            num= it.second;
        }




    cout <<ans <<endl;



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
