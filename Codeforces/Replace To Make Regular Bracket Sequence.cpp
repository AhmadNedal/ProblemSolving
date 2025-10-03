#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Link Problem : https://codeforces.com/contest/612/problem/C


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}






void solve() {

    string str; cin>>str;

    int n = str.size() ;

    if(n%2==1||n<2||(str[0]=='>'||str[0]==')'||str[0]=='}'||str[0]==']')){
        cout << "Impossible\n";
        return ;
    }

    int counter =0;
    vector <int>v;

    for (int i=0;i<str.size();++i) {
        if (str[i]=='>'||str[i]==')'||str[i]=='}'||str[i]==']'){
            if ( v.size()<1){
                cout << "Impossible\n";
                return;
            }
           // bool bol = (str[v[v.size()-1]]=='['&&str[i]==']')
            counter+=1;
            if (
                (str[v[v.size()-1]]=='['&&str[i]==']')||
                (str[v[v.size()-1]]=='{'&&str[i]=='}')||
                (str[v[v.size()-1]]=='<'&&str[i]=='>')||
                (str[v[v.size()-1]]=='('&&str[i]==')')
                ){
                counter-=1;
            }

            v.pop_back();

        }else {
            v.push_back(i);
        }
    }
    
        if ( v.size()>0){
             cout << "Impossible\n";
        }else {        
            cout << counter << endl;
        }






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;

    while (t--)solve();

    return 0;
}
