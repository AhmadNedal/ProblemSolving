#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}

ll n,m;
vector <ll>v,v2;

ll oo = 1e18+1;

map<tuple<ll, ll, bool>, ll> dp;


void solve() {
    ll n; cin>>n;
    queue <pair<ll,int>>q ;
    q.push({4,1});
    q.push({7,-1});


    while ( true ) {
        ll num  = q.front().first ;
        ll num2 = q.front().second;

        if (num>=n&&num2==0){
            cout << num <<endl;
            return ;
        }

        q.push({(num*10)+4,num2+1});
        q.push({(num*10)+7,num2-1});

        q.pop();

    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}