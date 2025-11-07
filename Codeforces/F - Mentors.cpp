#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){

    int n,q;
    cin>>n>>q;
    vector<pair<int,int>>v;
    v.resize(n);


    for(ll i=0;i<n;++i){
        cin>>v[i].first;
        v[i].second=i;
    }


    map<int,int>m,same;
    int j,k,num=0;



    while(q--){
        cin>>j>>k;
        j-=1,k-=1;

        if(v[j].first>v[k].first)
            m[ j ]+=1;
        else if(v[k].first>v[j].first)
            m[ k ]+=1;

    }


    sort(v.begin(),v.end());
    vector<int>ans;
    ans.resize(n);

    for(ll i=0;i<n;++i){

        if(i>0&&v[i].first!=v[i-1].first)
            num=i;

        ans[v[i].second] =num-m[ v[i].second ];

    }




    for(auto it : ans )
        cout << max(it,0) << " " ;




}


int main(){
    int _=1;
   // cin>>_;
    while (_--)
        solve();

    return 0;
}
