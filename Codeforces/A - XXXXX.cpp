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
    int l=0,r=n-1,sum=0;

    vector<int>v(n);

    for(auto&it:v){
        cin>>it;
        sum+=it;
    }

    if (sum%m!=0) {
        cout<<n<<endl;
        return;
    }

    while(l<n&&v[l]%m==0)
        l++;

    while(r>=0&&v[r]%m==0)
        r--;

    if(l>r) {
        cout<<-1<<endl;
        return;
    }


    cout<<max(1ll*r,n-1-l)<<endl;

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
