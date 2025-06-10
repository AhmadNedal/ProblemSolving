#include <bits/stdc++.h>
#define ll long long
using namespace std;




bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}



void solve() {

    ll n;cin>>n;
    vector<ll>v;
    ll num;
    for (int i=0;i<n;++i){
        cin>>num ;
        v.push_back(num);
    }


    vector<ll>v2=v;

    sort (v2.begin(),v2.end());

    if (v2==v) {
        cout << "YES"<<endl;
        return ;
    }





    for (int i=1;i<n;++i){
        if (v[i-1]>v[i]){
            cout << "NO"<<endl;
            return ;
        }
        v[i]-=v[i-1] ;
        v[i-1]=0;
    }

    cout << "YES"<<endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
