#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;
string s,t,str;


void solve(){
    ll a,b;
    cin>>a>>b;

    if(a==b) {
        cout <<0<<endl;;
        return;
    }

    int bita= 0,bitb=0;

     for (int i=31;i>-1;i--)
        if (a&(1<<i)){
            bita=i;
            break;
        }

     for (int i=31;i>-1;i--)
        if (b&(1<<i)){
            bitb=i;
            break;
        }


        if (bitb>bita) {
            cout<<-1<<endl;
            return;
        }

        y=a^b;

        if(y<=a){
            cout<<1<<endl;
            cout<<y<<endl;
            return;
        }


        x=a|b;

        if ((a^x)<=a&&(x^b)<=x){
            cout<<2<<endl;
            cout<<(a^x)<<" "<<(x^b)<<endl;
        }
        else
            cout <<-1<<endl;;


}


int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
