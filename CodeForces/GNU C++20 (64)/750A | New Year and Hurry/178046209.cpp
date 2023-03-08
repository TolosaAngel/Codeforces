#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k,t,p=0;
 
    cin>>n>>k;
 
    t=240-k;
 
    for(int i=1; i<=n; i++){
        t-=(5*i);
 
        if(t>=0){
            p++;
        }else{
            break;
        }
    }
 
    cout<<p;
}