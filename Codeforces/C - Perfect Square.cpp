#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll n,x,o,a,N=1e7-1,num,b,c,d,mx,m,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;
string s,t;
vector<string>v;



void solve(){

    cin>>n;
    ans=0;
    v.resize(n);

    for(auto&it:v)cin>>it;

     for(int i=0;i<n/2;++i)
        for(int j=0;j<n/2;++j){

            char ch = v[i][j],ch2=v[j][  n-i-1 ],
            ch3=v[n-i-1][n-j-1],ch4=v[n-j-1][i];

            mx=max({ch,ch2,ch3,ch4});
            ans+=(mx-ch)+(mx-ch2)+(mx-ch3)+(mx-ch4);

        }


     cout << //"Ans = " <<
     ans <<endl;

}



int main(){
    SPEED;
    int t=1;cin>>t;

    while (t--)solve();

    return 0;

}