#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}

ll n,m;
vector <ll>ans;
ll maxnum=0,maxit =0 ;





void solve() {

        ll n,k;cin>>n>>k;
        ans.clear();


        for (int i=0;i<n;++i) {
            if (i!=k)ans.push_back(i);
        }

        ans.push_back(k);

        if (ans.size()>n)ans.pop_back();

        for (int i=0;i<n;++i) {
            cout <<ans[i]<< " ";
        }


        cout <<endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
