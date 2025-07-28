#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x;
string s,t,a ;


void solve(){

    cin >>s>>t>>a ;

    int arrs[26]={0},arrt[26]={0},arra[26]={0} ;

    for(auto it:s)arrs[it-'a']+=1;
    
    for(auto it:t)arrt[it-'a']+=1;
    
    for(auto it:a)arra[it-'a']+=1;
    

    int idx=0;

    for(int i=0;i<t.size();++i) {
        if(s[idx]==t[i]) {
            idx+=1 ;
        }
        if(idx== s.size()){
            break;
        }
    }

    if(idx!=s.size()) {
        cout << "NO"<<endl;
        return ;
    }




    for(int i=0;i<26;++i){
        if (arrt[i]<arrs[i]){
            cout << "NO"<<endl;
            return ;
        }

        if (arrt[i]>arrs[i]+arra[i]){
            cout << "NO"<<endl;
            return;
        }
    }

    cout << "YES"<<endl;







}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
