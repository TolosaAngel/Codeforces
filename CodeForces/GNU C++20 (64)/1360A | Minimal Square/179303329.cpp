#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,a,b;
 
    cin>>t;
 
    while(t--){
        cin>>a>>b;
 
        if(a>b){
            if(a>(b+b)) cout<<a*a<<endl;
            else cout<<(b+b)*(b+b)<<endl;
        }else{
            if(b>(a+a)) cout<<b*b<<endl;
            else cout<<(a+a)*(a+a)<<endl;
        }
    }
}