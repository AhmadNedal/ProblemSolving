#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool cmp(const pair<int,int>& a, const int& val) {
    return a.first < val;
}


ll n,k,num,m,ans;
vector <int> v;


void solve(){

    cin>>n;
    v.resize(n);
    for(int i=0;i<n;++i)
        cin>>v[i];


    vector<map<int,int>>m;
    map<int,int>mp;
    vector<int>v2;

    int l=0,r=0;

    for(int i=1;i<n;++i)
        if(v[i]!=v[i-1]){
            v2.push_back(l);
            l=i;
        }
        
    v2.push_back(l);
    

    cin>>k;
    
    while(k--){
        cin>>l>>r;
        l-=1,r-=1;

       auto it=lower_bound(v2.begin(),v2.end(),l);
       
       if(!(it!=v2.end())){
            cout<<"-1 -1"<<endl;
            continue;
       }

       int idx = it-v2.begin();

       if(v2[idx]>l)
            idx-=1;

       if(idx==v2.size()-1 ){
            cout<<"-1 -1"<<endl;
            continue;
       }

       if(v2[idx+1]<=r)
          cout <<v2[idx+1]+1<< " " << v2[idx+1]<<endl;
       else
          cout<<"-1 -1"<<endl;
       


    }
}

int main(){
    int t=1;cin>>t;
    while (t--)
        solve();

    return 0;
}
