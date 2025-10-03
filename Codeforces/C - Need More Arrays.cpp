#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ret(tuple<ll, ll, ll> a, tuple<ll, ll, ll> b) {
    return get<0>(a) < get<0>(b);
}


void solve() {
    ll n; cin>>n;

    vector <ll>v;
    ll num ;
    set <ll>s;

    for ( int i=0; i < n;++i) {
        cin>>num;
        s.insert(num) ;
    }
    if (n==0|n==1){
        cout<<n<<endl;
        return ;
    }

    for (auto it : s ){
        v.push_back(it) ;
    }

    int ans =1 ;
    num = v[0] ;
    for (int i=1;i<v.size();++i){
         if (v[i]>num+1) {
                ans++;
                num=v[i];
         }
    }

    /*
    cout <<endl;
    for (auto it : v) {
        cout << it << " : ";
    }
    cout <<endl;
*/

    cout <<ans <<endl;






}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}


