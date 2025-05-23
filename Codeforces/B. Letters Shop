#include <bits/stdc++.h>
#define ll long long
using namespace std;

string str2 ;


//Problem Link : https://codeforces.com/contest/1187/problem/B

bool can (vector<int> v4 ) {
   
    for (auto it : str2 ) {

        if (v4[it-97]>0){
            v4[it-97]-=1;
            continue;
        }
        
        return false ;

    }
    
    return true ;
}



void solve() {

    string str;
    ll n;cin>>n>>str;

    vector<vector<int>>v(n, vector<int>(26));
    vector <int>v2(26 , 0 );

    
    int i=0;
    for (auto it  : str ) {
        v2[it-97]+=1;
        v[i]=v2;
        i+=1;
    }



    int q;cin>>q;
    int l=0,r=n-1,mid;
    
    while ( q-- ) {
        cin>>str2;
        
        l=0,r=n-1;

        int ans =-1;
        while (r>=l){

            mid = (l+r)/2 ;

            if(can(v[mid])){
                ans = mid;
                r=mid-1;
                continue;
            }

            l=mid+1 ;
        }

        cout << ans+1 <<endl;
        
    }




}

int main() {
     ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while (t--)solve();

    return 0;
}
