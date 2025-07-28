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


ll rec(ll index,ll index2, bool bol ) {
    if ((index==n&&index2==m)||index2==m){
        return 0 ;
    }

    if (index==n&&index2!=m){
        return oo;
    }

    auto key = make_tuple(index, index2, bol);
    if (dp.count(key)) return dp[key];



    ll ans= oo ;

    if (v[index]>=v2[index2]){
        ans = min(ans,rec(index+1,index2+1,bol));
    }

    if ( bol ){
        ans = min(ans, rec(index, index2+1, false)+v2[index2]);
    }
    ans = min (ans,rec ( index+1,index2,bol));


    return dp[key]=ans ;
}



void solve() {

    ll n;cin>>n;
    ll arr[n];
 
    for (int i=0;i<n;++i){
        cin>>arr[i];
    }
 
 
    sort (arr, arr+n) ;
 
 
    ll ans[n];
 
    int index =0 ;
 
    for (int i=1;i<n;i+=2){
        ans[i]=arr[index];
        index++;
    }
 
 
    for (int i=0;i<n;i+=2){
        ans[i]=arr[index];
        index++;
    }
 
    ll counter=0;
 
    for ( int i=1;i<n-1;++i) {
        if(ans[i]<ans[i+1]&&ans[i]<ans[i-1]){
            counter ++;
        }
    }
 
    cout << counter <<endl;
    
    for (auto it:ans)cout <<it<<" ";
    
    
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
