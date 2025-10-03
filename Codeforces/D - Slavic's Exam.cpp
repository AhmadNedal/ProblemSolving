#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}




void solve() {


    string str,str2 ; cin>>str>>str2 ;
    int index= 0;
    int n= str.size();

    for (int i=0;i<n;++i) {

        if (str[i]==str2[index]||str[i]=='?'){
            str[i]=str2[index];
            index++;
        }

        if(index>=str2.size()){
            break;
        }

    }

    string ahmad="ahmad";
    int indexx =0 ;
    for (int i=0;i<n;++i) {
        if ( indexx== ahmad.size()){
            indexx=0;
        }
        if(str[i]=='?')str[i]=ahmad[indexx];
    }

    if ( index==str2.size()){
        cout << "YES"<<endl;
        cout <<str<<endl;
    }else {
        cout << "NO\n";
    }






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
