#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num;
string s;


void solve(){

    cin>>s;
    vector<int>v;
    int counter=0;

    for(int i=0;i<s.size();++i) {
        if(s[i]=='1')
            counter+=1;
        else {
            if(counter>0)
                 v.push_back(counter);
            counter=0;
        }
    }
    
    if(counter>0)v.push_back(counter);


    sort(v.rbegin(),v.rend());

    counter=0;
    bool bol=true;
    for(auto it : v ){
        if(bol)counter+=it;
        bol=!bol;
    }

    cout <<counter<<endl ;


}

int main(){
    int t=1;cin>>t;
    while (t--)
        solve();

    return 0;
}
