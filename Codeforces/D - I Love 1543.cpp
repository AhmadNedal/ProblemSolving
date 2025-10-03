#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
vector <string>v;
string s;
int idx;
vector<char>v2;

void left(int num){

    for(int j=m-num-2;j>=num&&(n-1-num>num);--j)
        v2.push_back(v[n-num-1][j]);

}

void right(int num) {

    for(int j=num;j<m-num;++j)
        v2.push_back(v[num][j]);

}
 
 

void down(int num) {

    for(int j=num+1;j<n-num;++j)
          v2.push_back(v[j][m-1-num]);

}


void top(int num){

    for(int j=n-num-2;j>num&&(m-1-num>num);--j)
          v2.push_back(v[j][num]);
          
}


void Check(int num) {
    for(int j=num;j<min(m,1ll*3+num);++j)
        v2.push_back(v[num][j]);
}

void solve(){

    cin>>n>>m;
    v.resize(n);
    for(string&it:v)cin>>it;

    s ="1543";

    idx=0,ans=0;

    for(int num=0;num<min(m,n)/2;num++){
        v2.clear();
        
        right(num);
        down(num);
        left(num);
        top(num);

        idx=0;

        for(int i=0;i<v2.size();++i){
            if(v2[i]==s[idx]){
                idx+=1;
                if(idx==s.size()){
                    idx=0;
                    ans+=1;
                }
            }else {
                idx=0;
                if(v2[i]==s[0])idx+=1;
            }
        }

        for(int i=0;idx>0&&i<3;++i){
             if(v2[i]==s[idx]){
                idx+=1;
                if(idx==s.size()){
                    idx=0;
                    ans+=1;
                }
            }else break;
        }

    }



    cout<<ans<<endl;


}

int main(){
    int t=1;cin>>t;
    while (t--)
        solve();

    return 0;
}
