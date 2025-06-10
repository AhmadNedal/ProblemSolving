#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define all(v) v.begin(),v.end()



bool ret(pair<int,int>a,pair<int,int>b) {
    return a.second < b.second;
}





void solve() {
    ll sum=0,n,maxnum=0; cin>>n;
    int index= 0 ;
    ll arr[n];

    for (int i=0;i<n;++i){
        cin>>arr[i];

        if (arr[i]>maxnum){
            index=i ;
            maxnum=arr[i] ;
        }

        sum += arr[i];
    }

    int counter =0;
    vector <int> v;
    
    sum -=maxnum;

    for (int i=0;i<n;++i) {
        if(sum-arr[i]==maxnum&&i!=index){
            v.push_back(i+1);
        }
    }

    sort (arr ,arr+n) ;

      
    sum -=arr[n-2];
    if (sum==arr[n-2]){
        v.push_back(index+1);
    }
    
    


    cout << v.size()<<endl;

    for (auto it:v){
        cout << it << " " ;
    }






}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;//cin>>t;

    while (t--)solve();

    return 0;
}
