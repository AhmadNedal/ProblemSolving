#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;

void solve(){
    string str;
    cin>>n>>k>>str;
    int nn=0,c=0;

    for(int j=0;j<n;++j){
        if(str[j]=='1')
            c+=1;
        else
            c=0;
        
        nn=max(nn,c);
    }

    if(nn>=k){ 
        cout <<"NO"<<endl;
        return;
    }

    cout <<"YES"<<endl;

    ll left=1, rr=n;
    vector<int> arr(n,-1);

    bool f=false;

    for(int i=0;i<n;++i){
        if(str[i]=='1'){
            arr[i]=left;
            left++;
            f=true;
        }else {
            if(f){
                arr[i]=rr;
                rr-=1;
            }
        }
    }

    f=false;

    for(int i=n-1;i>=0;--i){
        if(str[i]=='1' && arr[i]==-1){
            arr[i]=left;
            left++;
            f=true;
        }else if(arr[i]==-1){
            if(f){
                arr[i]=rr;
                rr-=1;
            }
        }
    }

    for(int i=0;i<n;++i){
        if(arr[i]==-1){
            arr[i]=left;
            left+=1;
        }
    }

    for(int i=0;i<arr.size();++i)
        cout <<arr[i]<< " ";
    
    cout <<endl;
}

int main(){
    int t=1;
    cin>>t;
    while (t--)
        solve();

    return 0;
}
