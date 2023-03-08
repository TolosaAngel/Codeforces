#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n,k,c=0,a;
 
    cin>>t;
 
    while(t--){
        cin>>n>>k;
 
        for(int i=0; i<n; i++){
            cin>>a;
            if(a) c++;
        }
 
        c>0 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        c=0;
    }
}