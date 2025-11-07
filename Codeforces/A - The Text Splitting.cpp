#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;


void solve(){
    string s,t;

    int n,p,q;
    cin>>n>>p>>q>>s;


    if(p<q)
        swap(p,q);


    int c =-1;
    for(int i=0;n>=i*p;++i){
        int num=n;
        num-= p*i;

        if(num%q == 0){
            c = i ;
            break ;
        }
    }

    if(c == -1) {
        cout << c <<endl;
        return;
    }



    cout << c+(n-c*p)/q <<endl;

    t="";
    for(int i=0;i<1+s.size();++i){

        if(t.size() == p && c > 0 ){
            cout << t << endl;
            c-=1;
            t="";
        }else if( c < 1 && t.size() == q){
            cout << t <<endl;
            t="";
        }

        t+=s[i];

    }




}


int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
