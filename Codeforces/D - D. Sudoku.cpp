#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,ans;
vector<string>v;


bool checkThree(int i,int j){

    bool a[9];

    memset(a,false,sizeof a);

    for(int k=i;k<3+i;++k)
        for(int o=j;o<j+3;++o)
            a[ v[k][o]-'0'-1 ]=true;


    for(auto it :a )
        if(!it)
            return false ;

    return true;

}




void solve(){

    v.resize(9);

    for(string&it:v)cin>>it;

    bool a[9];
    memset(a,false,sizeof a);

    for(int i=0;i<v.size();++i){

        memset(a,false,sizeof a);

        for(int j=0;j<9;++j)
            a[ v[i][j]-'0' -1]=true;

        for(auto it : a ){
            if(!it){
                cout << "Invalid"<<endl;
                return;
            }
        }

        memset(a,false,sizeof a);

        for(int j=0;j<9;++j)
            a[ v[j][i]-'0' -1]=true;


        for(auto it : a ){
            if(!it){
                cout << "Invalid"<<endl;
                return;
            }
        }
    }


    for( int i=0;i<7;i+=3){
        for(int j=0;j<7;j+=3) {
            // cout << i << " : " <<j <<endl;
            if(!checkThree(i,j)){
                cout << "Invalid"<<endl;
                return ;
            }
        }
    }


    cout <<"Valid"<<endl;






}

int main(){
    int t=1;cin>>t;
    
    while (t--)
        solve();

    return 0;
}

