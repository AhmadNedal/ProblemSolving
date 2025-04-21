#include <bits/stdc++.h>
#define ll long long
using namespace std;


//Problem Link : https://codeforces.com/contest/2103/problem/B

void solve() {


    ll n,x; cin>>n;
    string str; cin>>str;
    ll ans =0 ;

    if (str[0]=='1')ans+=1;

    ans +=1 ;

    for (int i=1;i<str.size();++i){
        if ( str[i]!=str[i-1])ans+=1;

        ans +=1 ;
    }

    string newstr ="" ;
    newstr += str[0];

    for (int i=1;i<str.size();++i) {
        if(str[i]!=str[i-1]) {
            newstr+=str[i] ;
        }
    }

    int maxx =0 ;



    for (int i=2; i<newstr.size();++i) {
        if (newstr[i]=='1'&&newstr[i-1]=='0'&&newstr[i-2]=='1'){
            maxx=max(maxx,2) ;
            break;
        }

        if (newstr[i]=='0'&&newstr[i-1]=='1'&&newstr[i-2]=='0'){
            maxx=max(maxx,1) ;
        }

         if (newstr[i]=='0'&&newstr[i-1]=='1'){
            maxx=max(maxx,1) ;
        }

        // 1001

         if (str[i-1]=='0'&&str[i-2]=='1'){
            maxx=max(maxx,1) ;
        }
    }

    

    if (newstr.size()==2) {
        if (newstr[0]=='1'){
            maxx=1;
        }
    }






    cout << ans-maxx <<endl;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
