#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num;
vector<string>v;

int XAxies(int i,int j){
    num=0;
    ll left=j-1 ,right=j-1;
    for(int o=j-1;o>-1&&num<k;--o){
        if(v[i][o]!='.')break;
        left+=1;
    }

    for(int o=j+1;o<n&&num<k;++o){
        if(v[i][o]!='.')break;
        right+=1;
    }


    if(left+1+right<k)return 0;

    return min(left,k-1)+min(right,k-1)-(k-1)+1;


}

int YAxies(int i,int j){
    ll left=j-1 ,right=j-1,num=0;

    for(int o=i-1;o>-1&&num<k;--o){
        if(v[o][j]!='.')break;
        left-=1;
    }

    for(int o=i+1;o<n&&num<k;++o){
        if(v[o][j]!='.')break;
        right+=1;
    }


    if(left+1+right<k)return 0;

    return min(left,k-1)+min(right,k-1)-(k-1)+1;

}







void solve(){

    cin>>n;
    map<int,int>m;

    for(int i=0;i<n;++i){
        cin>>k;
      for(ll j=2;j*j<=k;++j)
          while(k%j==0){
              m[j]++;
              k/=j;
          }


        if(k>0&&k>1)
            m[k]++;
    }


    for(auto it :m){
        if(it.second%n!=0){
            cout<<"NO"<<endl;
            return ;
        }

   // cout << it.first <<  " : " << it.second <<endl;

    }

    cout<<"YES"<<endl;




}

int main(){
    int t=1;cin>>t;

    while (t--)
        solve();

    return 0;
}
