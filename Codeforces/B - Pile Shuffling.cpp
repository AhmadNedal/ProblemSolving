// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Write C++ code here
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    long long t, n; 
    cin >> t; 
    long long a, b, c, d; 
    
    while (t--) {
        cin >> n;
        long long ans = 0; 
        long long added = 0; 
        
        for (int i = 0;i<n;++i) {
            cin>>a>>b>>c>>d;
 
            if (d < b) 
                added+=min(a, c);
 
            ans +=abs(a-c);
            ans +=abs(b-d);
        }
        
        cout<<ans/2+added<<endl ;
        
        
        
        
        
        
        
        
}


        
        

    return 0;
}
        
        
        
        
        
        