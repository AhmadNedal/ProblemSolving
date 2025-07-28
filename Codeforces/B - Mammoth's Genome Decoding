#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x;
string s,t,a ;


void solve(){

    cin>>n>>s;

    if(n%4!=0){
        cout <<"==="<<endl;
        return;
    }
    int T=0,C=0,G=0,A=0,num=n/4;


    for(auto it : s) {
        if(it=='A')A+=1;
        else if(it=='C')C+=1;
        else if(it=='T')T+=1;
        else if(it=='G')G+=1;
    }

    int O=n-A-C-G-T;

    if (T>num || C>num || G>num|| A>num ) {
        cout << "==="<<endl;
        return;
    }


    for (auto it:s){
        if(it=='?'){
            if (A<num){
                cout <<"A";
                A+=1;
            }else if(C<num){
                cout <<"C";
                C+=1;
            }else if(G<num){
                cout <<"G";
                G+=1;
            }else if (T<num) {
                cout <<"T";
                T+=1;
            }

            continue;
    }

        cout <<it;
    }









}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin >>t ;

    while (t--)solve();

    return 0;
}
