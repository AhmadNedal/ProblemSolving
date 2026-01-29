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


    ll n,y,sum=0;
    cin>>n;
    vector<ll>v;
    v.resize(n);

    for(auto&it:v)
        cin>>it;


    int idx=-1,idx2=-1;
    for(int i = 0; i < n; i++)
       if(v[i]!=n-i){
            idx=i;
            break;
        }


    if(idx==-1){
        for(auto it : v )
            cout << it << " " ;
        cout <<endl ;
        return ;
    }



    for(int i=idx;i<n;i++) {
        if(v[i]==n-idx){
            idx2=i;
            break;
        }
    }


    while(idx<idx2) {
        swap(v[idx],v[idx2]);
        idx++,idx2--;
    }

    for(auto it : v )
        cout << it << " " ;

    cout <<endl;

    return;


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
