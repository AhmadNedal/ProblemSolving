#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
int N = 10001;
ll isPrime [1000001] = {0} ;
int arr[10001];


void solve() {


            int n,m ; cin>>n>>m ;
            string str="" ;
            int mod =1;
            if (n==m+1||n==m||n==m-1){
                mod=0;
            }



            if  ( (n>(m+1)) || ((m)>(n*2+2)) ){
                cout << "-1"<<endl;
                return  ;
            }

            long long sum = n+m ;
            for (int i=0;i<=sum ; ++i){
                if ( i%2== mod){
                    if  (n>0){
                    str +="0";
                    n-=1;
                    }
                }else {

                if (m>n&&m>1){
                    str+="11";
                    m-=2;
                }else {
                    if ( m > 0 ){
                    str +="1" ;
                    m-=1;
                }
            }
        }
    }


  cout<< str <<endl;

  }





    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1;//cin>>t;

        while (t--) {
         solve();
       }
        return 0;
    }
