#include <bits/stdc++.h>
#define ll long long
using namespace std;


// LinkProblem : https://codeforces.com/contest/1201/problem/C




 ll sum,n,k;
    bool can (ll num,ll arr[]) {
        sum=0 ;

        for (int i=n/2;i<n;++i){
            if(arr[i]<num){
                sum += (num-arr[i]) ;
            }
        }

        if (sum<=k) {
            return true ;
        }

        return false;



    }

void solve() {


       cin>>n>>k;
       ll arr[n];
       for (int i=0;i<n;++i){
        cin>>arr[i] ;
       }

       sort(arr ,arr+n);
       ll mid=-1,l=arr[n/2],r=arr[n/2]+k,num=arr[n/2];

       while(l<=r){

        mid =(l+r)/2;
        bool bol =can(mid,arr);
        if(bol){
            num = mid ;
            l=mid+1;
       }else {
            r=mid-1 ;
       }
    }

       cout << num <<endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     solve();

    return 0;
}
