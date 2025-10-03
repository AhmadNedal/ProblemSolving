#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD =1e9+7;

vector<ll>v,dp;
ll n,x;
string s,t,a ;


void solve(){

    cin >>s>>n;

    int num=0,num2 =0 ;

    for (auto it  : s){
        if(it=='*')num+=1;
        if(it=='?')num2+=1;
    }

    int sizee = s.size()-num-num2;



    if(sizee==n) {

        for (auto it : s) {
            if(it=='?'||it=='*')continue;

            cout <<it;
        }
        
        return;

    }


    if(sizee<n ) {

        if ( num==0 ) {
            cout << "Impossible"<<endl;
            return;
        }

        int dif = n - sizee;

        for (int i=0;i<s.size();++i) {
                if (s[i]=='*'||s[i]=='?')continue;

                if (i+1<s.size()&&s[i+1]=='*'&&dif>0){

                    for (int l=0;l<dif+1;++l)cout <<s[i];

                    dif = 0;
                    i++;
                }else
                    cout << s[i];
                
            }


          cout <<endl;


        return ;

    }



        if (n < sizee ){


            int dif =sizee-n;

            if ( dif>num+num2) {
                cout << "Impossible"<<endl;
                return;
            }


            for(int i=0 ; i <s.size();++i) {

                if(s[i]=='?'||s[i]=='*')continue;

                if(i+1<s.size()&&(s[i+1]=='?'||s[i+1]=='*')&&(dif>0)) {
                    i+=1 ;
                    dif-=1;
                    continue;
                }

                cout <<s[i];

            }

            cout <<endl ;

        }else cout << "Impossible"<<endl;
        






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin >>t ;

    while (t--)solve();

    return 0;
}
