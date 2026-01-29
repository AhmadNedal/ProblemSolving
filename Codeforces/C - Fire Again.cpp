#include<bits/stdc++.h>

using namespace std;
int N =2001;
queue <pair <int,int>>q;
bool vis[2001][2001];
int dx[] ={-1,1,0,0 };
int dy[] ={0 ,0,-1,1};
int n,m,k ;

    void BFS() {
    pair <int,int>solu ;
    while(!q.empty()){
        pair <int,int> fr = q.front();
        q.pop() ;
        solu = fr ;

        for ( int i=0;i<4;++i) {
           int nx = fr.first+dx[i] ;
           int ny = fr.second+dy[i] ;

            if(nx>=0&&ny>=0&&nx<n&&ny<m&&!vis[nx][ny]){
                vis[nx][ny]=true;
                q.push(make_pair(nx,ny));
            }

        }




    }
        cout << solu.first+1 << " " <<solu.second+1 <<endl;

    }

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);


    cin>>n>>m>>k;

    int x,y ;
    for ( int i=0;i<k;++i){
        cin >>x>>y ;
        x-- ; y--;

        q.push(make_pair(x,y));
        vis[x][y]=true;
    }

    BFS();




    return 0;
}
