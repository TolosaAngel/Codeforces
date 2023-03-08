#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,x,a,b,c,z=0;
 
    cin>>t;
 
    for(int i=0; i<t; i++){
        cin>>x;
        cin>>a>>b>>c;
 
        int p[3]={a,b,c};
 
        for(int k=0; k<3; k++){
            x=p[x-1];
            z++;
 
            if(z!=3 && x==0){
                cout<<"NO"<<endl;
                break;
            }
 
            if(z==3 && x==0){
                cout<<"YES"<<endl;
                break;
            }
        }
 
        z=0;
    }
}