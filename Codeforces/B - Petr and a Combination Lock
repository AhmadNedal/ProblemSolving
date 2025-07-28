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

    dp.clear();
    v.clear();

    cin>>n;
    ll num,sum =0;
    for(int i=0;i<n;++i) {
        cin>>num ;
        v.push_back(num) ;
    }


    if ( bol() ){
        cout << "YES"<<endl;
        return ;
    }

    cout << "NO"<<endl;










}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
