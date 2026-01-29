#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9+7;
ll num,m,n,ans,x,id,mx;
set<ll>s;

vector<ll>v,v1,v2;
vector<int> v4,v3,dp;

void solve(){

    int arr[26];
    memset(arr,0,sizeof arr);

    string s;
    for(int i=0;i<2;++i){
        cin>>s;
        for(auto it : s )
            arr[ it-'A' ]+=1;

    }



    cin>>s;
    map<int,int>m;
    for(auto it : s )
        m[it-'A']+=1;

    for(char i=0;i<26;++i)
        if( m[i]!= arr[ i] ){
            cout << "NO"<<endl;
            return ;
        }


    cout << "YES" <<endl;



}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int _=1;
    //cin>>_;
    while(_--)
        solve();

    return 0;
}
