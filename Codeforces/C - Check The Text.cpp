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
    string s,t,str;

    cin>>n;
    string i;

    while(true){
        cin>>i;

        if ( (i[0]-'0') < 10 ) {
            x=stoi(i);
            break ;
        }

        if(s.size() == 0 )
            s+=i;
        else {
            s+=" ";
            s+=i;
        }

    }

    bool bol = 0 ;
    str = "";

    while(x--){
        cin>>t;

        if(t=="CapsLock"){
            bol=!bol;
            continue;
        }
        if (t=="Backspace"){
            if (!str.empty())
                str.erase(str.end() - 1);

            continue;
        }else if(t=="Space"){
            str+=" ";
            continue;
        }

        if(bol)
            for(char &c : t)
                c=toupper(static_cast<unsigned char>(c));



        str+=t;

    }

    if (str == s){
        cout <<"Correct"<<endl;
        return ;
    }

        cout <<"Incorrect"<<endl;





}


int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
