// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";

    int t ;cin>>t;
    while(t--){

        string s;cin>>s;

        int hour=0;
        hour+=(s[0]-'0');
        hour*=10 ;
        hour+=(s[1]-'0');

        int h2=hour;

        if(hour==0)hour=12;

        if(hour>12){
            if(hour-12<10)cout<<"0";
            cout<<hour-12;
        }
        else {
            if(hour<10)cout << "0";
            cout<<hour;
        }

        cout<<":"<<s[3]<<s[4] ;
        cout<<(h2>=12?" PM":" AM")<<endl;

    }


    return 0;
}
