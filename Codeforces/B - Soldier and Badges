#include <bits/stdc++.h>
#define ll long long
using namespace std;



    void solve(){

        
        ll n,counter=0; cin>>n;
        ll vis[n+1]={0};
        for(int i=0,num;i<n;++i){
            cin>>num ;
            vis[num]+=1;
        }
     
        ll num=0;
        for(int i=1;i<n+1;++i){
 
            if(num>0){
                counter += num;
            }
            if(vis[i]>1){
                num+=vis[i]-1;
            }else if(vis[i]==0&&num>0){
                num--;
            }
        }
        counter += (num*(num+1))/2;
        cout << counter <<endl;
        

     }

                int main()
                {
                    ios::sync_with_stdio(0);
                    cin.tie(0);

//                   #ifndef ONLINE_JUDGE
//                        freopen("C:\\Users\\ahmad\\OneDrive\\Desktop\\Cionn\\ahmadout.txt", "w", stdout);
//                        freopen("C:\\Users\\ahmad\\OneDrive\\Desktop\\Cionn\\ahmad.txt", "r", stdin);
//                    #endif


                  while(_--)solve() ;
                    return 0;
                }
