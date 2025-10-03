#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {


    int counter =0 ;
    string str ;
    int idx =0 ;

    bool bol = false,bol2=true ;
    for (int i=0;i<8;++i) {
         cin>>str;
         counter =0 ;

         for(int j=0;j<8&&bol2;++j) {
            if(str[j]=='#'){
             counter++;
             idx =j+1;
            }
         }

         if(bol&&counter==1&&bol2){
            cout <<i+1<<" "<<idx<<endl;
            bol2 = false ;
         }
         if (counter>1) {
            bol = true ;
         }
    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1 ;cin>>t ;
    while(t--)solve();

    return 0;
}
