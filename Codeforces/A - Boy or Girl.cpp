#include <bits/stdc++.h>
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

string s; 

void solve() {

    cin>>s;

    set <char>st; 
    for (auto it : s )st.insert(it); 
    
    if(st.size()%2==1)cout <<"IGNORE HIM!"<<endl; 
    else cout<<"CHAT WITH HER!" <<endl; 


}

int main() {
    SPEED;

    int t=1;

    while (t--)solve();

    return 0;
}
