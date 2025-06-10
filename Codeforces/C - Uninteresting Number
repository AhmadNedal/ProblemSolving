#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(v) v.begin(),v.end()



bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}


string str ;
ll n ;

map<tuple<ll, ll, ll>, bool> m;
map<pair<int, ll>, bool> m2;



bool rec (int idx,ll sum) {

    if (idx==n) {
        return sum%9==0;
    }

     if (m2.count({idx, sum})) {
        return m2[{idx, sum}];
     }else if (str[idx]=='2'){
        ll newSum = sum+4 ;
        return m2[{idx, sum}]=( rec ( idx+1 , sum+2 )|| rec ( idx+1 , newSum) );
    }else if ( str[idx]=='3') {
        ll newSum = sum+9 ;
        return m2[{idx, sum}] = ( rec ( idx+1 , sum+3)|| rec ( idx+1 , newSum) );
    }else {

        return m2[{idx, sum}] =rec ( idx+1 ,sum+(str[idx]-'0'));
    }

}



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
