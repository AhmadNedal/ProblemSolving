#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){

    cin>>n;

    v.resize(n);
    for(auto&it:v)
        cin>>it;

    ans =0 ;

    for(int i=n-1;i>0;--i)
        for(int j=i-1;j>-1;--j)
            if(v[j]>v[i]){
                ans+=1;
                break;
            }


    cout <<ans <<endl;




}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   /* ifstream in("Round1.in");
    if (!in.is_open()) {
        cerr << "Error: Could not open Round1.in";
        return 1;
    }*/

    int _=1;
    cin>>_;
    while(_--)
         solve();

    return 0;
}
