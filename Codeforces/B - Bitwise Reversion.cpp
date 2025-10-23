#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,m,ans;
//vector <string>v;
string s;
int idx;
ll x,y,z;
vector<bool>v,vis;
map<int,vector<int>>mp ;



int dfs(int num , int numcat) {
    int ans =0;
    vis[num]=true;

    bool bol = true ;
    for(auto it:mp[num]){
        if (!vis[it]) {
            bol = false;
            ans += dfs(it,numcat+v[it]);
        }
    }

    if(bol)
        return numcat<=m;

    return ans ;

}



void solve(){

        cin>>x>>y>>z;

        bitset<32>a(x),b(y),c(z);

        for(int i=0;i<32; ++i) {
            int num1=a[i];
            int num2=b[i];
            int num3=c[i];

            if (((num1==0&&num2==0&&num3==0)||
                (num1==0&&num2==1&&num3==0)||
                (num1==0&&num2==0&&num3==1)||
                (num1==1&&num2==0&&num3==0)||
                (num1==1&&num2==1&&num3==1)))
                continue;

            cout << "NO"<<endl;
            return;
        }

        cout <<"YES"<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
