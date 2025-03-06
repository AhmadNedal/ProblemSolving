#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/1294/problem/C


ll power (ll a,ll b){
        if (b==0) {
            return 1 ;
        }
        if (b==1){
            return a ;
        }
        ll ret = power(a,b/2) ;
        ret*=ret ;
        if (b%2==1){
            ret *=a;
        }
        return ret ;
    }


void solve() {


        ll n ; cin>>n ;
        vector <pair<ll,ll>> v ;

        for (ll i=2;i*i<=n;++i){

            if (n%i==0){
                ll c=0 ;
                while(n%i==0){
                    c++;
                    n/=i;
                }
                v.push_back({i,c}) ;
            }
        }

        bool  bol =true ;

        if ( n>1 ){
            v.push_back({n,1});
        }
        ll num=0;
        ll number=1,mul=0;

        for(auto it : v ) {
            num += it.second ;
        }



        if (v.size()==3) {
            cout << "YES"<<endl;
            for (auto it : v) {
                cout << power(it.first,it.second) << " " ;
            }
            cout <<endl;


        }else if(v.size()>3){
            cout << "YES"<<endl;
            number =1 ;
            for (int i=0;i<2;++i) {
                cout << power(v[i].first, v[i].second) << " " ;
            }

            for (int i=2;i<v.size();++i) {
                mul = pow(v[i].first,v[i].second) ;
                number*=mul;
            }

            cout << number <<endl;

        }else if (v.size()==2){
            if(num>3) {
                cout << "YES"<<endl;
                number =1;
                mul=0;
                for(auto it:v){
                    cout << it.first << " " ;
                    mul=0;
                    if ( it.second > 1 ){
                        mul= pow(it.first,(it.second-1)) ;
                        number *=mul;
                    }

                }
                cout << number <<endl;
            }else {
            bol =false ;
            }

        }else if (v.size()==1){

            if (num>5) {
            cout << "YES"<<endl;
            cout << v[0].first <<" "<< v[0].first*2<<" " <<power( v[0].first,(v[0].second-3)) <<endl;
            }else {
            bol =false;
            }
        }



        if ( !bol ) {
            cout << "NO" <<endl;
        }


}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
