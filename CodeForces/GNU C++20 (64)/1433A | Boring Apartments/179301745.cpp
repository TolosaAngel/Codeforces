#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,x,c=0;
    bool f=false;
 
    cin>>t;
 
    while(t--){
        cin>>x;
 
        for(int i=1; i<10; i++){
            for(int j=1; j<=4; j++){
                c+=j;
 
                if(j==1 && i==x){
                    f=1;
                    break;
                }
 
                if(j==2 && i+10*i==x ){
                    f=1;
                    break;
                }
 
                if(j==3 && i+100*i+10*i==x){
                    f=1;
                    break;
                }
 
                if(j==4 && i+1000*i+100*i+10*i==x){
                   f=1;
                   break;
                }
            }
 
            if(f) break;
        }
 
        cout<<c<<endl;
        c=0;
        f=false;
    }
}