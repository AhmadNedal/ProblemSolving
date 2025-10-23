#include <bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(0); cin.tie(0);
#define YES cout << "YES"<<endl;
#define NO cout << "NO"<<endl;
#define IN(vec) for(auto&it:vec) cin >> it;
using namespace std;


ll const MOD =1e9+7;

ll l=0,ans=0,mn=LLONG_MAX,r=MOD,y;
vector<ll>b;
vector<string>v;
map<pair<int,int>,bool>vis;

int n,m;
char ch;

bool dfs(int startX,int startY,int x,int y,int num){

    vis[{x,y}]=true;


    if(startX==x&&startY==y&&num>3)
        return true;



    bool ans = false ;


    if( x+1<n && ((v[x+1][y]==ch&& !vis[{x+1,y}])|| (x+1==startX&&y==startY&& num>3)))
        ans|= dfs(startX,startY,x+1,y,num+1);


    if ( y+1<m && ((v[x][y+1] ==ch && !vis[{x,y+1}])|| (x==startX&&y+1==startY&& num>3)))
        ans |= dfs(startX,startY, x,y+1,num+1);


    if (y-1>=0&& ((v[x][y-1] ==ch && !vis[{x,y-1}])|| (x==startX&&y-1==startY&& num>3)))
        ans |= dfs(startX,startY,x,y-1,num+1);


    if (x-1>=0&& (( v[x-1][y]==ch && !vis[{x-1,y}]) || (x-1==startX&&y==startY&& num>3)))
        ans |= dfs(startX,startY,x-1,y,num+1);



    return ans;


}


void solve(){

    cin>>n>>m;
    v.resize(n);

    for(auto&it:v)
        cin>>it;


    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j){
            ch=v[i][j];

            vis.clear();
            if (dfs(i,j,i,j,1)){
                cout << "Yes"<<endl;
                return;
            }
        }


    cout << "No"<<endl;





}


int main(){
    SPEED;
    int t=1;

    while (t--)solve();

    return 0;
}
