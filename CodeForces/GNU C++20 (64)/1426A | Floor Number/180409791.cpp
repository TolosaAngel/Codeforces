#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n,x,c=0;
 
    cin>>t;
 
    while(t--){
        cin>>n>>x;
 
        while( !(n <= 2+c*x) ){
            c++;
        }
 
        cout<<c+1<<endl;
        c=0;
    }
}