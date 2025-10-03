#include <bits/stdc++.h>
#define ll long long
using namespace std;
 //Linkproblem: https://codeforces.com/contest/550/problem/C
const ll OO = 1e9 * -1;

ll n,k;
vector<ll> v;
vector<vector<ll>> dp;


void solve() {


     string str; cin>>str;

     for(int i=0;i<str.size();++i){
        if(str[i]=='0'||str[i]=='8'){
            cout << "YES\n"<<str[i];
            return ;
        }


        for (int j=i+1;j<str.length() ;++j) {

                string str2 = {str[i],str[j]};
                int num = stoi(str2) ;

                if (num%8==0) {
                    cout<<"YES\n";
                    cout<<num<<"\n" ;
                    return;
                }

            for(int k=j+1;k<str.size();++k){

                string str2 = {str[i],str[j],str[k]};
                int num = stoi(str2) ;

                if (num%8==0) {
                    cout<<"YES\n";
                    cout<<num<<"\n" ;
                    return;
                }
            }
        }
     }


     cout << "NO\n" ;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //int t=0;//cin>>t;
   // while (t--)

    solve();

    return 0;
}
