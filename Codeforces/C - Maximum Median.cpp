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

    cin>>n>>k;
    v.resize(n);
    for(auto&it:v)
        cin>>it;

    sort(v.begin(),v.end());
    ll mid=-1,l=v[n/2],r=v[n/2]+k,num=v[n/2];

    while(l<=r){

        mid =(l+r)/2;
        bool bol=can(mid);

        if(bol){
            num = mid ;
            l=mid+1;
        }else
            r=mid-1 ;

    }

    cout << num <<endl;


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
