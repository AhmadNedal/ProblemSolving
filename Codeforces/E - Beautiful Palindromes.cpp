#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k, num, ans;
//vector <string>v;
int idx;
ll x, y, z, mx;
vector<ll> v;
vector<bool> vis;
map<int, vector<int>> mp;
string s, t, str;

void solve() {

    cin>>n>>k;
    v.resize(n);

    for (auto&it:v)
        cin>>it;

    vector<bool>vi(n+1,false);

    for (ll i=0;i<n;++i)
        if (1<=v[i]&&v[i]<1+n)
            vi[v[i]]=true;


    vector<ll>v3;
    for (ll i=1;i<1+n;++i)
        if (!vi[i])
            v3.push_back(i);


    vector<ll> answer;
    answer.reserve(k);

    for (ll x:v3) {
        if (answer.size()==k)
            break;

        answer.push_back(x);
    }

    vector<ll>v4=v;

    for(ll x:answer)
        v4.push_back(x);

    mx=min(3LL,n);

    while (answer.size()<k) {

        x=v4[v4.size()-1];
        y=v4[v4.size()-2];
        z=-1;


        for(ll i=1;i<1+mx;++i)
            if (i!=x&&i!=y){
                z=i;
                break;
            }


        if (z==-1)
            for (ll i=1; i <= n; ++i)
                if (i!=x && i != y) {
                    z=i;
                    break;
                }


        if(z==-1)
            z=1;

        answer.push_back(z);
        v4.push_back(z);
    }


    for (int i=0;i<answer.size();++i)
        cout<<answer[i]<< " ";

    cout<<endl;
}

int main() {

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
