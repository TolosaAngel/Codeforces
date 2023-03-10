#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n;
    bool f=1;
 
    cin>>t;
 
    for(int c=0; c<t; c++){
        cin>>n;
        int a[n];
 
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
 
        for(int k=1; k<n; k++){
            if(a[k]%a[0]!=0){
                f=0;
            }
        }
 
        f ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        f=1;
    }
}