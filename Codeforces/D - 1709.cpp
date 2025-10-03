#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x,o,a,m,b,y;
string s,t;








void solve(){

    // cout << fixed  << setprecision(20) <<d<<endl;

    ll n ;

    cin>>n;
    vector<ll>a,b;
    a.resize(n);
    b.resize(n);

    for(auto&it : a)cin>>it;
    for(auto&it : b)cin>>it;

    vector<pair <ll,ll>> v;

    
    // Bubble Sort !
     
    bool swapped;
    
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                v.push_back({1,i+1});
                swapped = true;
            }
        }
        n--;
    } while (swapped);



    n=b.size();
    do {
        swapped = false;
        for (int i=0;i<n-1;i++) {
            if (b[i]>b[i+1]) {
                swap(b[i],b[i + 1]);
                v.push_back({2,i+1});
                swapped=true;
            }
        }
        n--;
    } while (swapped);




    for(int i=0 ;i<a.size();++i) {
          if (a[i]>b[i]) {
            v.push_back({3,i+1});
          }
    }

    cout << v.size() <<endl;

    for(auto it : v ) {
        cout << it.first << " " << it.second <<endl;
    }





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin >>t ;

    while (t--)solve();

    return 0;
}
