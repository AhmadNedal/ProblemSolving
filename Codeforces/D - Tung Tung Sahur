#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve() {

    string str,str2; cin>>str>>str2;

    vector <int> v;
    int num =1;

    if (str[0]!=str2[0]){
        cout << "NO"<<endl;
        return ;
    }

    for (int i=0;i<str.size()-1;++i) {
        if (str[i]==str[i+1]){
            num++;
        }else {
            v.push_back(num) ;
            num=1;
        }
    }

    if ( num > 0 ) {
        v.push_back(num) ;
    }

    
    num =1;
    int index =0 ;
    for (int i=0;i<str2.size()-1;++i){

            if (str2[i]==str2[i+1]){
                num++;
            }else {

                if (num<v[index]||num>v[index]*2){
                    cout << "NO"<<endl;
                    return ;
                }
                num =1;
                index ++ ;
                if  (index>v.size()){
                    cout << "NO"<<endl;
                    return ;
                }
            }
    }

    if (num > 0) {
        if  (index>v.size()){
            cout << "NO"<<endl;
            return ;
        }

          if (num<v[index]||num>v[index]*2){
                    cout << "NO"<<endl;
                    return ;
          }
          index ++ ;
    }
    
    
    if (index==v.size()){
        cout << "YES"<<endl;
    }else {
        cout << "NO"<<endl; 
    }






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;cin>>t;

    while (t--)solve();

    return 0;
}
