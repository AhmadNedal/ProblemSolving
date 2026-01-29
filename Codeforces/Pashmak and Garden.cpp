/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    // std::cout<<"Hello World";
    int x,x1,y,y1;
    cin>>x>>y>>x1>>y1;

    if(x==x1) {
        cout << x+abs(y - y1) << " " <<y<< " "<<x1+abs(y - y1) << " " << y1 << endl;
        return 0 ;
    }
    else if (y ==y1) {
        cout << x << " " << y+abs(x - x1) << " "<< x1 << " " <<y1+abs(x - x1)<< endl;
        return 0 ;
    }
    else if (abs(x - x1) == abs(y - y1)) {
        cout << x << " " << y1 << " "<< x1 << " " <<y<< endl;
        return 0 ;
    }

    cout << -1 << endl;


    return 0;
}
