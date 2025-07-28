#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Link Problem  :https://codeforces.com/contest/1851/problem/D 


void solve() {

    ll n ; cin>>n;
    ll arr[n-1];
    for (int i=0;i<n-1;++i) {
        cin>>arr[i];
    }

    ll num =-1;
    map <ll,ll>m ;
    if (arr[0]>n){
        num=arr[0];
    }else {
        m[arr[0]]++;
    }
    bool bol =false;

    for (int i=1;i<n-1;++i) {
        if(arr[i]-arr[i-1]>n) {

            if(num!=-1){
               bol=true;
               break;
            }

            num =arr[i]-arr[i-1] ;
            continue;
        }

        m[arr[i]-arr[i-1]]+=1;

        if(m[arr[i]-arr[i-1]]>1){
            if(num!=-1){
                bol=true;
                break;
            }
            num = arr[i]-arr[i-1];

        }
    }



        vector<ll>v ;
        for (int i=1;i<n+1;i++){
            if (m[i]==0){
               v.push_back(i);
            }
        }

        if (bol){
            cout <<"NO\n";
        }else if (num!=-1) {

            ll l=0,r=v.size()-1;
            bool bol2 = false ;

            if (v.size()>1){
                if(v[0]+v[1]==num)bol2=true ;
            }

            if (bol2){
                cout << "YES\n";
            }else {
                cout << "NO\n";
            }

        }else {

            cout << "YES\n";

        }





}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;
    while (t--)solve();

    return 0;
}
