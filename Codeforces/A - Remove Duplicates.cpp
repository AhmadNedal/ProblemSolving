#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);

    for(auto&it:v)
        cin>>it;


    map<int,bool>m;
    vector<int>ans;

    for(int i=n-1;i>-1;--i){
        if(!m[v[i]])
            ans.push_back(v[i]);

        m[v[i]]=true;
    }

    reverse(ans.begin(),ans.end());

    cout<<ans.size()<<endl;
    for(auto it:ans)
        cout<<it<<" ";

}


int main(){
    int _=1;
   // cin>>_;
    while (_--)
        solve();

    return 0;
}
