#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/371/problem/C


 ll counterb=0,price,counters=0,counterc=0,b,s,c,pb,ps,pc,r=1e13;

 bool can(ll num){
       ll priceb=0,prices=0,pricec=0;
       if (counterb>0)
         priceb=(num*counterb - b)*pb ;
       if(counters>0)
          prices=(num*counters - s)*ps ;
       if (counterc>0)
          pricec=(num*counterc - c)*pc ;

        if(priceb<0)
         priceb=0;
        if(prices<0)
         prices=0;
        if(pricec<0)
         pricec=0;
       if (priceb+prices+pricec<=price){
        return true ;
       }
       return false;
    }


void solve() {

     string str ; cin>>str;
       cin>>b>>s>>c;
       cin>>pb>>ps>>pc;
       cin>>price;
       for(int i=0;i<str.size();++i){
            if(str[i]=='B'){
                counterb ++;
            }else if(str[i]=='S'){
                counters++;
            }else{
                counterc++;
            }
       }
        ll l=0,mid;
        ll ans =0 ;


        while(l<=r){

            mid = (l+r)/2;
            if (can(mid)){
                ans = mid ;
                l = mid+1 ;
            }else {
                r = mid-1 ;
            }
        }
        cout << ans <<endl;





    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
