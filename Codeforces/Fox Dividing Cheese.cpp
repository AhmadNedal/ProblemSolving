#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/371/problem/B


const ll OO = 1e9+1;
map<pair<ll, ll>, ll> dp;
ll recc(ll a, ll b) {


        if (a==b){
           return 0;
        }

        if (dp.count({a, b})){
            return dp[{a, b}];
        }

        ll &res = dp[{a, b}];
        res = OO;

           if (a%2==0){
                res = min(res,recc(a/2,b)+1);
           }
           if (b%2==0){
               res = min(res,recc(a,b/2)+1);
           }
           if (a%3==0){
            res = min(res,recc(a/3,b)+1);
           }

           if (b%3==0){
            res = min(res,recc(a,b/3)+1);
           }

           if (a%5==0){
                res = min(res,recc(a/5,b)+1);
           }

           if (b%5==0){
                res = min(res,recc(a,b/5)+1);
           }

    return res;
}

void solve() {
    ll a, b;
    cin >> a >> b;

    dp.clear();

    ll res = recc(a,b);

    if (res>=OO) {
        cout << "-1\n";
    } else {
        cout <<res<<"\n";
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
