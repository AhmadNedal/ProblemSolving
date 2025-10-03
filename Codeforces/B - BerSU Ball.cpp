#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(v) v.begin(),v.end()



bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}

 ll n ,k,x,d;

int const OO =3e4+1;
int dp [OO][601] ;
int v[OO] ;

int rec (int cur , int add ) {

    if (cur>=OO){
        return 0;
    }

    if (dp[cur][add+300]!=-1) {
        return dp[cur][add+300];
    }

    int res1=0,res2=0,res3=0;

    if ( cur<cur+d+add-1) {
        res1=rec(cur+d+add-1,add-1)+v[cur];
    }
        res2=rec(cur+d+add,add)+v[cur];
        res3=rec(cur+d+add+1,add+1)+v[cur];


    return dp[cur][add+300]=max({res1,res2,res3});

}




void solve() {

    cin>>n;

    int boy[106],girl[106];
    memset(boy,0,sizeof boy);
    memset(girl,0,sizeof girl);

    while(n--){
       cin>>k;
       boy[k]++;
    }

    cin>>n;

    while(n--){
       cin>>k;
       girl[k]++;
    }

    int ans =0 ,num;

    for (int i=1;i<105;++i){

        if (girl[i]==0)continue;

            num = min(boy[i-1],girl[i]);
            ans += num;
            girl[i]-=num;
            boy[i-1]-=num;

            num = min(boy[i],girl[i]);
            ans += num;
            girl[i]-=num;
            boy[i]-=num;

            num = min(boy[i+1],girl[i]);
            ans += num;
            girl[i]-=num;
            boy[i+1]-=num;
    }

    cout << ans <<endl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
