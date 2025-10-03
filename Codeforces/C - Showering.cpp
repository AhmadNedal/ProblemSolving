#include <iostream>
#include <cmath>
using namespace std;

// 2024 

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        long long n, s, m;
        cin >> n >> s >> m;

        int endlast = 0;
        bool bol = false;

        for (int j = 0; j < n; j++) {
            int first, last;
            cin >> first >> last;

            if (j==n-1)
                if (abs(last - m)>= s) 
                    bol = true;
                
           

            if (abs(endlast-first)>=s)
                bol = true;
           
            endlast = last;
        }

        cout<<(bol?"YES":"NO")<<endl;
     
    }

    return 0;
}
