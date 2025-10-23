#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;




void solve(){
    cin>>n;

    deque<string>v ;
    string q;

    while(n--){
        cin>>q;

        if(q=="pwd"){
            // cout<< "v.size() = " << v.size() << endl;

            cout<<"/";
            for(int i=0;i<v.size();++i)
                cout << v[i] << "/";

            cout<<endl;
            continue;
        }


        cin>>s;

        string str="";

        if(s[0]=='/')
            v.clear();


        for(int i=0;i<s.size();++i){

            if(s[i]!='/'){
                str+=s[i];
                continue;
            }

            if(str.size()>0&&str[0]!='.')
                v.push_back(str);
            else if(str.size()>0)
                v.pop_back();

            str="";
        }

          if(str.size()>0&&str[0]!='.')
             v.push_back(str);
          else if (str.size()>0)
             v.pop_back();

    }

}


int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
