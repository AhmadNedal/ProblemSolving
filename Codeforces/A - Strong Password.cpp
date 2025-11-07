#include <bits/stdc++.h>
#define ll long long
using namespace std;



ll const MOD = 1e9+7;
int num ,n,ans;
vector<int>v;

int rec(int idx){

    if(idx==n)
        return 0;


    int ans =0;
    if(v[idx]-v[idx-1]==num){
        ans = rec(idx+1);
    }else if (v[idx]+1-v[idx-1]==num){
        ans = rec(idx+1)+1;
    }else if ( v[idx]-1-v[idx-1]==num){
        ans = rec(idx+1)+1;
    }else {
        return MOD;
    }





}


void solve(){

    string s;
    cin>>s;

    bool bol = false ;
    char ch = 'a';
    cout<<s[0];

    for(int i=1;i<s.size();++i){
        if(!bol&&s[i]==s[i-1]){

          if(s[i]==ch)
            ch+=1;

          cout << ch << s[i];
          bol = true;

        }else
            cout << s[i];

    }

    if(ch==s[s.size()-1])
        ch+=1;

    if(!bol)
        cout<<ch;

    cout<<endl;


}


int main(){
    int _=1;
    cin>>_;
    while (_--)
        solve();

    return 0;
}
