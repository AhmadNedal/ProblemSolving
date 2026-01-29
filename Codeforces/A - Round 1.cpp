#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll> s;

vector<ll> v,v2;
vector<int> v4,v3,dp;

void solve() {
    cin>>n;
    cout<<(n<27?"Yes":"No")<<endl;
}

int main() {

    ifstream in("Round1.in");
    if (!in.is_open()) {
        cerr << "Error: Could not open Round1.in\n";
        return 1;
    }

    cin.rdbuf(in.rdbuf());

    int _;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
