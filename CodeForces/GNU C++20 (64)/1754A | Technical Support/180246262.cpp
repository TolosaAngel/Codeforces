#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n,c=0;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        string v;
 
        cin>>v;
 
        for(int i=0; i<n; i++){
            v[i]=='Q' ? c++ : c--;
 
            if(c<0) c=0;
        }
 
        c==0 ? cout<<"YES\n" : cout<<"NO\n";
        c=0;
    }
}