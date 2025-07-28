#include <bits/stdc++.h>
#define ll long long
using namespace std;


//Problem Link : https://codeforces.com/contest/676/problem/C

bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}
ll n;



void solve(){
                                               
    cin>>n; ll k ; cin>>k ;

    string str ; cin>>str;


    int l =0, r=0,num=0;
    char last='a';
    int ans =0 ;

    while( r < n ){
        ans = max (ans ,r-l) ;
        if(str[r]=='a'){
            r+=1 ;
        }else if (num < k ) {
            num+=1;
            r+=1;
        }else {
            while(num>=k){
                if(str[l]!='a'){
                    num-=1;
                }
                l+=1;
            }
        }
    }

    ans = max (ans ,r-l) ;
    
    r=0 ,l=0,num=0;

    while( r < n ){
        ans = max (ans ,r-l) ;
        if(str[r]=='b'){
            r+=1 ;
        }else if (num < k ) {
            num+=1;
            r+=1;
        }else {
            while(num>=k){
                if(str[l]!='b'){
                    num-=1;
                }
                l+=1;
            }
        }
    }

    ans = max (ans ,r-l) ;

    cout << ans <<endl;
    


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;

    while (t--)solve();

    return 0;
}
