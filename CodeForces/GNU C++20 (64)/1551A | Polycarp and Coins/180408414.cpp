#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n,a,b;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        b=(n/3);
        a=(n-2*b);
 
        while(a+2*b!=n){
            cout<<"A: "<<a<<" B: "<<b<<endl;
 
            b++;
            a-=2;
        }
 
        if(a==b+2) a-=2, b+=1;
 
        cout<<a<<" "<<b<<endl;
    }
}