// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std ;

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int t ;
    cin>>t;
    while(t--){

        string s ; cin>>s;
        string str ="";
        str+=s[0];
        for(int i=1;i<s.size();i+=2)
            str+=s[i];


        cout << str <<endl;


    }

    return 0;
}
