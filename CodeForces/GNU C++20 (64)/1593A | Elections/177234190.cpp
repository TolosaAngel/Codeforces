#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,a,b,c,m,n=0;
 
    cin>>t;
 
    while(t--){
        cin>>a>>b>>c;
 
        if(a>=b && a>=c) m=a, n++;
        if(b>=a && b>=c) m=b, n++;
        if(c>=a && c>=b) m=c, n++;
 
        if(n==1){
            if(m==a) cout<<0<<" "<<m-b+1<<" "<<m-c+1<<endl;
            if(m==b) cout<<m-a+1<<" "<<0<<" "<<m-c+1<<endl;
            if(m==c) cout<<m-a+1<<" "<<m-b+1<<" "<<0<<endl;
        }else if(n==2){
            cout<<m-a+1<<" "<<m-b+1<<" "<<m-c+1<<endl;
        }else{
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
 
        n=0;
    }
}