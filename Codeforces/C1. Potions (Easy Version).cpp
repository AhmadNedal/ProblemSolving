#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Problem Link : https://codeforces.com/contest/1526/problem/C1

void solve() {

    ll n;cin>>n;
    priority_queue<ll> q ;

    int counter= 0 ;
    ll sum=0;
    ll num;

    for(int i=0;i<n;++i){
        cin>>num;
        sum+=num;
        counter+=1;

        if(num<0){
            q.push(-num) ;
        }

        while(sum<0){
            sum+=q.top();
            q.pop();
            counter-=1;
        }
    }

    cout<<counter<<endl;








}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
