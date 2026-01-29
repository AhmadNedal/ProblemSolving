#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
ll num ,n,ans;
set<ll>s;


vector<ll>v,v2;
vector<int> v4,v3,dp;

void solve(){


    string str;
    cin>>n>>str;


    set<char>st;
    vector<int>p(n,0),s(n,0);

    for(int i=0;i<n;++i){
        st.insert(str[i]);
        p[i]=(int)st.size();
    }


    st.clear();
    for(int i=n-1;i>-1;--i){
        st.insert(str[i]);
        s[i]=st.size();
    }


    int ans =st.size();

    for(int i=0;i<n-1;++i)
        ans = max(ans , s[i+1]+p[i]);


    cout <<ans <<endl;


    /*
        paiumoment
        1234566789
        9876554321
    */

}

int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
