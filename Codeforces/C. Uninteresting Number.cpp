#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(v) v.begin(),v.end()



//Problem Link : https://codeforces.com/contest/2050/problem/C

string str ;
ll n ;

map<tuple<ll, ll, ll>, bool> m;
map<pair<int, ll>, bool> m2;



bool rec2(ll num2, ll num3,ll sum ) {

    if (sum %9==0 ) {
        return true ;
    }

    if( num2==0&&num3==0){
        return false ;
    }


    if ( m.count(make_tuple(num2, num3, sum))){
        return m[make_tuple(num2, num3, sum)];
    }

    if( num2>0&&num3>0){

        return m[make_tuple(num2, num3, sum)]=rec2( num2-1 , num3 , sum+2)||rec2( num2,num3-1,sum+6)||rec2( num2-1 , num3-1, sum+8);

    }
    
    if ( num2 >0 ) {

        return m[make_tuple(num2, num3, sum)]=rec2( num2-1 , num3 , sum+2) ;

    }

        return m[make_tuple(num2, num3, sum)]=rec2( num2,num3-1,sum+6);

}







void solve() {


   cin>>str;
   n= str.size() ;
   m.clear() ;

   ll sum=0,num2=0,num3=0;


   for (int i=0;i<str.size();++i) {

        if (str[i]=='2') {
            num2++;
        }else if ( str[i]=='3'){
            num3++ ;
        }
        sum += (str[i]-'0') ;
   }


   sum %=9 ;

   if ( sum ==0) {
        cout << "YES\n";
   }else if ( rec2(num2,num3,sum))  {
        cout <<"YES"<<endl;
   }else {
        cout << "NO"<<endl;
   }












}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
