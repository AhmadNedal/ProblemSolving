/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main()
{
    // std::cout<<"Hello World";

    int t; cin>>t;

    while(t--){

        int n ; cin>>n;
        vector <int>v ;
        v.resize(n);
        map<int,int>m;
        set<int>s;

        for(auto&it :v)
            cin>>it;


        int last = v[0];
        int counter =1;

        for(int i=1;i<n;++i){
            if(v[i] == v[i-1]) {
               counter+=1;
               m[last]=max(counter  , m[last]);
            }else {
                m[last]=max(counter  , m[last]);
                counter =1;
            }

            last= v[i];
        }

         m[last]=max(counter , m[last]);

        long long ans =1e18;

        for(auto  it : m )
            ans = min (ans , (long long ) it.first*(n-it.second));


        cout << ans <<endl;


    }


    return 0;
}
