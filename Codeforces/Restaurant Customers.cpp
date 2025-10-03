#include <bits/stdc++.h>
#define ll long long
using namespace std;


//Problem Link : https://codeforces.com/gym/102961/problem/E


void solve() {

    vector <pair <ll,ll>>  v;
    ll st,en;
    vector <ll> v2;
    ll n ; cin>>n;
    for (int i=0;i<n;++i){
        cin>>st>>en;
        v.push_back({st,en});
        v2.push_back(st);
        v2.push_back(en);
    }


    sort (v2.begin(),v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    vector <ll> v3 (v2.size()+2);

    fill(v3.begin(),v3.end(),0) ;

    for (int i=0;i<n;++i) {
        int idx = lower_bound(v2.begin(),v2.end(),v[i].first)-v2.begin();
        int idx2 = lower_bound(v2.begin(),v2.end(),v[i].second)-v2.begin();

        v3[idx]++;
        v3[idx2+1]--;
    }

    for (int i=1;i<v3.size();++i) {
        v3[i]+=v3[i-1];
    }
    ll maxele =0 ;
    for (int i=0;i<v3.size();++i) {
        maxele = max(maxele , v3[i]);
    }


    cout << maxele <<endl;




}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
