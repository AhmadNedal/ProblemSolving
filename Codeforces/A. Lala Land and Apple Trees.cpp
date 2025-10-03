#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {

    int n ; cin>>n;

    ll v,p;

    vector <pair<ll,ll>> v1,v2;

    for(int i=0;i<n;++i) {
        cin>>p>>v;
        if (p>0){
            v1.push_back({p,v});
        }else {
            v2.push_back({p,v});
        }
    }


    sort(v1.begin(),v1.end());
    sort(v2.rbegin(),v2.rend());
    
    
    ll ans=0;
    
    for (int i=0;i<min(v1.size(),v2.size());++i) {
        ans+= (v1[i].second+v2[i].second);
    }

    if (v2.size()>v1.size()){
        ans+= (v2[v1.size()].second);
        cout<<ans<<endl;
    }else if (v2.size()<v1.size()){
        ans+= (v1[v2.size()].second);
        cout<<ans<<endl;
    }else {
        cout<<ans<<endl;
    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;

    while (t--)solve();

    return 0;
}
