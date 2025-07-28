#include <bits/stdc++.h>
#define ll long long
using namespace std;

//Link Problem : https://codeforces.com/contest/363/problem/B



void solve() {


    int n,k; cin>>n>>k;
    int arr[n] ;


    for (auto&it:arr)cin>>it ;

    int l=0,r=0,ans =1e8+1;
    int sum = 0,index=1;

    while (r<n) {

         if(r-l==k) {
            if ( sum<=ans) {
                ans=min(ans,sum) ;
                index = l+1;
            }
            sum+=arr[r];
            r+=1;
        }else if (r-l<k ) {
            sum+=arr[r];
            r++;
        }else {
            sum-=arr[l] ;
            l+=1;
        }
    }


      while(r-l>k){
        sum-=arr[l];
        l++;
      }

      if (r-l==k) {
        if (sum<=ans) {
             ans=min(ans,sum) ;
             index = l+1;
        }
      }


    cout << index<<endl;


    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
