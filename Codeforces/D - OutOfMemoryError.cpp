// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    // Write C++ code here
    ios::sync_with_stdio(false);
cin.tie(nullptr);

    long long  n,m,h,t;
    cin>>t;
    while(t--){

        cin>>n>>m>>h;
        vector<long long >v;
        v.resize(n);
        for(auto&it:v)
            cin>>it;

        vector <long long >v2(n);
        v2=v;

        long long  idx,val;
        map < long long , long long > mp ;

        while(m--){
            cin>>idx>>val ;
            idx-=1;
            mp[idx]+=val;

            if ( v[idx]+mp[idx] > h ) {
                mp=map<long long , long long >();
            }


        }


        for(int i=0;i<n;++i){
            cout << v[i]+mp[i]<<" ";
        }
        cout <<endl;//l
    }





    return 0;
}
