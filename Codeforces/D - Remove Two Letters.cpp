// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    // Write C++ code here
    long long t,n; cin>>t;
    long long a,b,c,d ;

    while(t--){
        string s;
        cin>>n>>s;

        char ch='9',ch2='2';
        int ans =0 ;

        for(int i=1;i<n;++i) {

            if(s[i]!=ch||s[i-1]!=ch2 )
                ans +=1 ;

            ch2=s[i];
            ch=s[i-1];

        }

        cout <<ans<<endl;





    }


    return 0;
}
