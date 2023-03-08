#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        if(n==3){
            cout<<2<<" "<<3<<" "<<1<<endl;
        }else{
            int j;
            for(int j=2; j<n; j++) cout<<j<<" ";
            cout<<n<<" "<<1<<endl;
        }
    }
}