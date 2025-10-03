#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;

vector<ll>v,seg,arr,v2;
ll n,x,o,l,k,ans=0,mn=LLONG_MAX,r=MOD,y;

void solve() {

    cin>>s;
    int arr[3];
    memset(arr, 0 , sizeof arr );

    for(auto it : s ) {
        if (isalpha(it)) {
            arr[0]+=1;
        }else if (isdigit(it)) {
            arr[1]+=1;
        }else {
            arr[2]+=1;
        }
    }

    if(arr[0]<4){
        cout << "The last character must be a letter."<<endl;
        return ;
    }else if(arr[1]<4){
        cout << "The last character must be a digit."<<endl;
        return ;
    }else if(arr[2]<2){
        cout << "The last character must be a symbol."<<endl;
        return ;
    }
    cout << "The last character can be any type."<<endl;
}


int main() {
    SPEED;
    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
