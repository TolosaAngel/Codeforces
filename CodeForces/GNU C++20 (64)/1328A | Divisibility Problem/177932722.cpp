#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a,b,t;
 
    cin>>t;
 
    while(t--){
        cin>>a>>b;
 
        a%b ? cout<<b-(a%b)<<endl : cout<<0<<endl;
    }
}