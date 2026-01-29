#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
set<ll>s;


vector<int>v;
vector<int> v4,v2,v3,dp;

void solve(){
    ll n;
    cin>>n;
    priority_queue<ll>pq;
    ll x;
    while(n--){
        cin>>x;
        pq.push(x);
    }

    ll a;
    while(pq.size()>1){
        a = pq.top();
        pq.pop();
        x = pq.top();
        pq.pop();

        pq.push(x+a-1);
    }

    cout << pq.top() << endl;


}

int main(){
    int _=1;
    cin>>_;
   // Mul();
    while (_--)
        solve();

    return 0;
}
