#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k,m;
 
    cin>>n;
 
    k=n%2;
 
    if(k==0){
        m=n/2;
        cout<<m<<endl;
        while(m--) cout<<2<<" ";
    }else{
        m=(n/2)-1;
        cout<<m+1<<endl;
        while(m--) cout<<2<<" ";
        cout<<3;
    }
}