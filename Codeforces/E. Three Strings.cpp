#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(v) v.begin(),v.end()


//Problem Link : https://codeforces.com/contest/2050/problem/E

string str ;
ll n ;
string a,b ;

map<tuple<int,int,int>,int> m;

int rec (int idxa,int idxb ,int pos) {


    if (pos==str.size()) {
        return 0 ;
    }

    if ( m.count(make_tuple(idxa,idxb,pos))){
        return m[make_tuple(idxa,idxb,pos)];
    }



    int num =1,num2=1;
    if (str[pos]==a[idxa]){
        num=0;
    }
    if (str[pos]==b[idxb]){
        num2=0;
    }

    if (a.size()==idxa){
        return m[make_tuple(idxa,idxb,pos)]= rec(idxa,idxb+1,pos+1)+num2 ;
    }else if (b.size()==idxb){
        return m[make_tuple(idxa,idxb,pos)]=rec(idxa+1, idxb ,pos+1)+num ;
    }else {
        return m[make_tuple(idxa,idxb,pos)]= min( rec(idxa+1, idxb , pos+1)+num , rec(idxa,idxb+1, pos+1)+num2);
    }

}









void solve() {


   cin>>a>>b;
   cin>>str;
   m.clear();

   cout <<rec(0,0,0) <<endl;







}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
