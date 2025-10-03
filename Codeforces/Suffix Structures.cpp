#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/448/problem/B



void solve() {

            string s,t; cin >>s>>t;
            int sarr[26]={0},tarr[26]={0};
            for(int i=0;i<s.size();++i){
                sarr[s[i]-97]++;
            }
            for(int i=0;i<t.size();++i){
                tarr[t[i]-97]++;
            }
            for(int i=0;i<26;++i){
                if(tarr[i]>sarr[i]){
                    cout << "need tree" <<endl;
                    return;
              }
            }

            if(s.size()==t.size()){
                cout << "array" <<endl;
                return ;
            }

            int index=0;
            for(int i=0;i<s.size();++i){
                 if(t[index]==s[i]){
                    index++;
                }
                 if(index==t.size()){
                    cout << "automaton"<<endl;
                    return ;
                }
            }
             cout << "both" <<endl;

    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
