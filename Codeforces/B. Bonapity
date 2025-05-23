#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Problem Link : https://codeforces.com/gym/101028/problem/B



void solve() {

    string str , str2 ; cin>>str>>str2 ;

    if ( str.size()!=str2.size()) {
        cout <<"No"<<endl;
        return ;

    }


    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);



    for ( int i=0 ; i < str.size(); ++i) {
        if ( str[i] == str2[i] )continue;


        if( (str[i] =='e'&&str2[i]=='i')|| (str[i] =='i'&&str2[i]=='e') )continue;
        if( (str[i] =='p'&&str2[i]=='b')|| (str[i] =='b'&&str2[i]=='p' ) )continue;

        cout << "No"<<endl;
        return ;

    }

    cout << "Yes"<<endl;










}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t;
    while (t--)solve();

    return 0;
}


