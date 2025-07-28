// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    int t,n; cin>>t; 
    long long k ; 
    while(t--){
        cin>>n>>k; 
        vector<long long> v(n,0); 
        for(auto&it:v)cin>>it; 
        
        sort(v.rbegin(), v.rend());
        
        
        long long num=1,ans=0;
        for(int i=0;i<n;++i){
            
            if(v[i]*num>k){
                ans+=1; 
                continue;
            }
            
            num*=2; 
            
        }
        
        cout <<ans<<endl; 
        
        
    }
    

    return 0;
}
