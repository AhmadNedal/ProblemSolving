#include <bits/stdc++.h>
#define ll long long
using namespace std;


//Problem Link : https://codeforces.com/contest/1790/problem/D

void solve() {

    ll n;cin>>n;
    map<ll,ll>m;
    ll num ;

    for (int i=0;i<n;++i) {
        cin>>num;
        m[num]+=1;
    }


    ll last=0;
    bool bol = true;
    ll counter=0;
    ll lastKey =-1;

    for (auto it=m.rbegin();it!=m.rend();++it) {

        if (lastKey == -1) {
                
            lastKey = it->first ;
            
        }else if ( !(lastKey==it->first+1)) {
            
            counter += last;
            last=it->second;
            lastKey=it->first;
            continue;
        
        }


        lastKey=it->first;

        if (!(it->second==last||bol)){

            if(it->second>last){
                last=it->second;
            }else {
                counter += last-it->second;
                last = it->second ;
            }
            
            continue;
        }

        last = it->second;
        bol=false;


    }

    counter += last;

    cout << counter <<endl ;






}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
