#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n;
vector <ll>v;
map<pair<ll, ll>, bool> dp ;


bool bol(ll sum=0,ll index=0) {

   if(index>=n){
      return sum%360==0;
   }

    if (dp.count({index, sum}))
        return dp[{index, sum}];

   bool res = ( bol((sum+v[index]),index+1)|| bol(sum-v[index],index+1) )  ;

   return res ;

}



void solve() {


    ll k ;

    cin>>n>>k;
    map <ll,ll> m ;

    ll num ;
    ll n2= n;

    while ( n-- ) {
        cin >> num ;
        m[k-(num%k)]+=1;
    }


    if ( m[k] == n2) {
        cout << "0"<<endl;
        return ;
    }

    ll maxnum=0;

    for (auto it : m)  {

      if ( it.first!=k && it.second>= maxnum ) {
            maxnum=it.second ;
            num = it.first;
      }

    }



    ll ans = num+1;
    maxnum-=1;
    ans += maxnum*k;

    cout << ans <<endl;








}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
