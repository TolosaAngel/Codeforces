#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    intl t,n,m=0,c=1;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        for(int i=3; i<=n; i+=2){
            m+=c*i*2+(i-2)*2*c;
            c++;
        }
 
        cout<<m<<endl;
 
        m=0;
        c=1;
    }
}