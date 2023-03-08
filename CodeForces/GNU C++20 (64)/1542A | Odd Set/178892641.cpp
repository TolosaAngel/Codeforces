#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n,a,p=0,ip=0;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        for(int i=0; i<2*n; i++){
            cin>>a;
 
            if(a%2==0)p++;
            else ip++;
        }
 
        p==ip ? cout<<"Yes"<<endl : cout<<"No"<<endl;
 
        p=0;
        ip=0;
    }
}