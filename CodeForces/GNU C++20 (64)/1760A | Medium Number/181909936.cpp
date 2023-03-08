#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    intl t,a,b,c;
 
    cin>>t;
 
    while(t--){
        cin>>a>>b>>c;
 
        if(a>=b && a<=c || a>=c && a<=b){
            cout<<a<<endl;
            continue;
        }
 
        if(b>=a && b<=c || b>=c && b<=a){
            cout<<b<<endl;
            continue;
        }
 
        if(c>=a && c<=b || c>=b && c<=a){
            cout<<c<<endl;
            continue;
        }
 
        if(c==b && b==a) cout<<a<<endl;
    }
}