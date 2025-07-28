#include<bits/stdc++.h>
using namespace std;
#define ll long long
#include <limits>
#define ll long long
int N = 10001;
ll isPrime [1000001] = {0} ;
int arr[10001];


void solve() {
     int n,num ; cin >> n ;
     int arr[n];

     for (int i=0;i<n;++i) {
        cin >>arr[i];
        }


    int counter =0  ; bool bol=false;
    for (int i=1;i<n;++i)
    {

        if ( (arr[i]==0&&arr[i-1]!=0) || (arr[i-1]==0&&arr[i]!=0)  ){
            counter ++ ;
        }

    }


    if(arr[0]==0){
        bol = true ;
    }

    if ( counter ==0 && bol ){
        cout << "0" <<endl ;
    }else if ( counter == 0 && !bol ){
    cout << "1"<<endl;
    }else if ( counter ==1){
    cout <<"1" <<endl; }
    else if (counter==2 && bol) {
        cout << "1" <<endl;
    }else {
    cout << "2" <<endl;
    }








     }







    int main()
    {


        ios::sync_with_stdio(0);
        cin.tie(0);

        int t=1;cin>>t;

        while (t--) {
         solve();
       }
        return 0;
    }
