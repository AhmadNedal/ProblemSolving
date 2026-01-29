// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   //  std::cout << "Try programiz.pro";
      int n,m,y,t;
      cin>>t;
      while(t--){
      cin>>n>>m>>y;

     cout << ((n<m&&m<y)?"STAIR":(n<m&&m>y)?"PEAK":"NONE") <<endl;
      }
    return 0;
}
