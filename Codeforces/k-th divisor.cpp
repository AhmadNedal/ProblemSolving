#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/762/problem/A



void solve() {

     
       ll n,k,num=0; cin >>n>>k ;
       vector<ll> v,v2;
       for(ll i=1;i<=sqrtl(n);++i) {
            if(i*i==n){
                v.push_back(i);
            }else if(n%i==0){
                v.push_back(i) ;
                v.push_back(n/i) ;
            }
       }
 
       sort (v.begin(),v.end());
 
        if (k>v.size()){
            cout << "-1" <<endl;
        }else {
            cout<<v[k-1]<<endl;
        }
 


    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
