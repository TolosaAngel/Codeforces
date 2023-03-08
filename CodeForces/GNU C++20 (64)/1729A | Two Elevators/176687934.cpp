#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,a,b,c,t_a,t_b;
 
    do{
        cin>>t;
    }while(t<1 || t>10000);
 
    int v[t];
 
    for(int i=0; i<t; i++){
        do{
            cin>>a>>b>>c;
        }while(a<1 || a>10e7 || b<1 || b>10e7 || c<1 || c>10e7 || b==c);
 
        t_a = abs(a - 1);
        t_b = abs(b-c)+abs(c - 1);
 
        if(t_a < t_b){
            v[i]=1;
        }else if(t_a > t_b){
            v[i]=2;
        }else{
            v[i]=3;
        }
    }
 
    for(int i=0; i<t; i++){
        cout<<v[i]<<endl;
    }
}