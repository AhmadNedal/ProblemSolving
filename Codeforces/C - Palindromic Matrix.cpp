#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll n,k,num,ans;
vector<int>v;
string s;
map<int,int>m;
vector<vector<int>>v2;



void even(){

    int i=0,j=0;

    vector<int>tmp;
    for(auto it : m )
        while(it.second>0){
            it.second-=4;
            tmp.push_back(it.first);

            if(tmp.size()==n/2){
                v2.push_back(tmp);
                tmp.clear();
            }
        }


    for(int i=0;i<v2.size();++i){
        tmp.clear();
        for(int j=0;j<v2.size();++j){
            cout << v2[i][j]<< " " ;
            tmp.push_back(v2[i][j]);
        }
        reverse(tmp.begin(),tmp.end()) ;

        for(auto it : tmp ){
            cout <<it <<" ";
        }

        cout <<endl;
    }


    for(int i=v2.size()-1;i>-1;--i){
            
        tmp.clear();
        
        for(int j=0;j<v2.size();++j){
            cout << v2[i][j]<< " " ;
            tmp.push_back(v2[i][j]);
        }
        
        reverse(tmp.begin(),tmp.end()) ;

        for(auto it : tmp )
            cout <<it <<" ";
        

        cout <<endl;
    }
    
}







void odd(){

    vector<int>tmp,x,y;
    int one=-1;

    for(auto it : m ){

        if (it.second%2==1){
            one=it.first;
            it.second-=1;
        }
        

        while(it.second>3&&v2.size()<n/2){
              it.second-=4;
              tmp.push_back(it.first);

              if(tmp.size()==(int)n/2){
                  v2.push_back(tmp);
                  tmp.clear();
             }
        }


        while(it.second>1){
                it.second-=2;
                if(x.size()== (int)n/2)
                    y.push_back(it.first);
                else
                    x.push_back(it.first);
            }

    }
    

    int idx=0;
    for(int i=0;i<v2.size();++i){
            
        tmp.clear();
        
        for(int j=0;j<v2.size();++j){
            cout << v2[i][j]<< " " ;
            tmp.push_back(v2[i][j]);
        }

        reverse(tmp.begin(),tmp.end()) ;

        cout << y[idx]<< " ";
        idx+=1;

        for(auto it : tmp )
           cout <<it <<" ";
        

        cout <<endl;
    }

    for(int num:x)
        cout << num << " ";

    cout <<one<< " " ;

    reverse(x.begin(),x.end()) ;

    for(int num:x)
        cout << num << " ";

    cout<<endl;

    reverse(y.begin(),y.end()) ;
    idx=0 ;


    for(int i=v2.size()-1;i>-1;--i){
            
        tmp.clear();
    
        for(int j=0;j<v2.size();++j){
            cout << v2[i][j]<< " " ;
            tmp.push_back(v2[i][j]);
        }

        cout << y[idx]<< " ";
        idx+=1;

        reverse(tmp.begin(),tmp.end()) ;

        for(auto it : tmp ){
            cout <<it <<" ";
        }

        cout <<endl;
        
    }

}






void solve(){

    cin>>n;
    for(int i=0;i<n*n;++i){
        cin>>num;
        m[num]+=1;
    }

    if(n%2==0)
        for(auto it:m)
            if(it.second%4!=0){
                cout <<"NO"<<endl;
                return;
            }
            

    int four= max(0ll,(n*n-(2*n-1))/4),two=n-1,one=1;
    
    if(n%2==1)
        for(auto it:m){

            if (it.second%2==1){
                one-=1;
                it.second-=1;
            }

            if (it.second>3&&four>0){
                int mn = min(it.second/4,four);
                four-=mn;
                it.second -= mn*4;
           }

            if(it.second%2==0){
                two-=it.second/2;
                it.second%=2;
            }

            if(it.second%2==1){
                cout <<"NO"<<endl;
                return;
            }

        }


        if(n%2==1&&((two>0&&two%2==1)||one!=0||four>0)){
            cout <<"NO"<<endl;
            return;
        }

        cout <<"YES"<<endl;
        
        if(n%2==0)even();
        else odd();


}





int main(){
    int t=1;
    while (t--)
        solve();

    return 0;
}
