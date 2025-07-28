#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {

    ll n,c=1; cin>>n;
    ll arr[n];

    for (auto&it : arr)cin>>it;


    set<ll>last ;
    set<ll>m4;
    last.insert(arr[0]);

    for(int i=1;i<n;++i) {

        m4.insert(arr[i]);
        
        if(last.count(arr[i])){
            last.erase(arr[i]);
        }


        if(last.empty()){
            last.clear();
            last=m4;
            m4.clear();
            c+=1;
        }

    }

    cout <<c<<endl;

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
