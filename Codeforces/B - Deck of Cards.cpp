#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
const int NN = 1e3+3;
ll v[NN][NN];
vector<ll>v2;



void solve(){

    ll k;
    string s;
    cin>>n>>k>>s;

    vector<char>v(n,'+');

    int num1=0,num=0,num2=0;

    for(int i=0;i<k;++i){
        if(s[i]=='0')
            num+=1;
        else if (s[i]=='1')
            num1+=1;
        else
            num2+=1;
    }


    int num3=num2;

    for(int i=0;i<n;++i){

        if(num>0){
            v[i]='-';
            num-=1;
            continue;
        }

        if(num2>0){
            v[i]='?';
            num2-=1;
        }

        if(num2<1)
            break;

    }

    if(n==k)
        num1=2*n;


    for(int i=n-1;i>-1;--i){

        if(num1>0){
            v[i]='-';
            num1-=1;
            continue;
        }

        if(num3>0){
            v[i]='?';
            num3-=1;
        }

        if(num3<1)
            break;
    }

    for(auto it:v)
        cout<<it;


    cout<<endl;


}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
