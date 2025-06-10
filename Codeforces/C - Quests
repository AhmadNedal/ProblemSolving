#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}

ll n,m;
vector <ll>v;
ll maxnum=0,maxit =0 ;

ll rec (ll index,ll last){


    if(index==n){
        return 0 ;
    }


    ll res1=0,res2=0,res3=0;

    if (v[index]-1==last){
        return res1=rec(index+1,last)+1 ;
    }


    res2 = rec(index+1,last) ;
    res3 = rec(index+1, v[index]) ;




}



void solve() {
    ll k ;
    cin>>n>>k;
    ll a[n],c[n];

    for (auto &it:a)cin>>it;
    for (auto &it:c)cin>>it;



    ll maxnum=0,num=0;
    ll add=0,maxx=0;

    for(int i=0;i<n;++i) {

        if (i>=k)break;

        maxx=max(maxx,c[i]);
        maxnum = max(maxnum, (k-i-1)*maxx+add+a[i]);

        add+=a[i];

    }

    cout << maxnum<<endl;





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
