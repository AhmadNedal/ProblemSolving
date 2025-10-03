#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;

ll const MOD =1e9+7;

vector<vector<int>>seg,arr,v2;
ll n,x,o,a,b,c,d,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
ll dp[1001];


bool can(ll mid){
    ll s = mid;
    while(mid > 0) {
        s += mid/k;
        mid /= k;
    }
    return s>=n;
}



void solve(){

    cin>>n>>k ;

    ll l=0,r=MOD,ans =MOD;

    while (l<=r) {
         ll mid = (l+r)/2;

        if(can(mid)){
            ans=mid;
            r=mid-1;
        }else
            l=mid+1;
    }

    cout <<ans<<endl;
}


int main(){
    SPEED;
    int t=1;

    while (t--)solve();

    return 0;
}
