#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,a,b,c=0;
 
    cin>>n;
 
    while(n--){
        cin>>a>>b;
 
        while(a>0 && b>0){
            if(a>b){
                c+=(a/b);
                a-=b*(a/b);
            }else{
                c+=(b/a);
                b-=a*(b/a);
            }
        }
 
        cout<<c<<endl;
        c=0;
    }
}