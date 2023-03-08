#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n,m,Ax,Ay;
 
    cin>>t;
 
    while(t--){
        cin>>n>>m;
 
        for(int i=0; i<m; i++){
            cin>>Ax>>Ay;
        }
 
        m==n ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
}