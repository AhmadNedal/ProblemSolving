#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/455/problem/A



    ll const N = 1e6+2 ;
    ll n, dp[N] ,arr[N]={0} ;
    ll lastIndex =0 ;

 ll rec(int idx) {
        if(idx>=lastIndex+1){
            return 0 ;
        }

        ll &res=dp[idx] ;

        if(res!=-1){
            return res;
        }

        res=0;
        ll num=max(rec(idx+2)+(arr[idx]*idx),rec(idx+1));
        res = max (res,num);

        return res ;




    }


void solve() {

       cin>>n;
       memset ( arr , 0 , sizeof arr );
       memset ( dp , -1 , sizeof dp  );


       for(ll num,i=0;i<n;++i){
            cin>>num;
            arr[num] ++;
            lastIndex= max(lastIndex,num) ;
       }
        cout <<rec(0) ;

    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
