#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Problem Link : https://codeforces.com/contest/1790/problem/C

void solve() {

    int n ; cin>>n;
    int arr[n][n] ;

    for(int i =0 ; i < n; ++i) {
        for(int j=0;j<n-1;++j){
            cin>>arr[i][j];
        }
    }

    int num1=0,num2=0,n1=0,n2=0;

    for(int i =0;i<n;++i) {
        if (num1==0||num1==arr[i][0]) {
            n1+=1;
            num1 = arr[i][0];
        }else {
            n2+=1;
            num2 = arr[i][0];
        }
    }

    int ans =0;

    if ( n1 > n2 ) {
        ans = num1 ;
    }else{
        ans = num2;
    }

    int index =-1;

    for(int i=0;i<n;++i) {
        if ( arr[i][0]!=ans ) {
            index=i;
            break;
        }
    }


    cout<<ans<<" ";

    for (int i=0;i<-1+n;++i) {
        cout << arr[index][i] << " " ;
    }

    cout <<endl;







}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;cin>>t ;
    while (t--)solve();

    return 0;
}
