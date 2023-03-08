#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,n,c=0;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        vector<int> v(n);
 
        for(int i=0; i<n; i++) cin>>v[i];
 
        for(int j=9-n; j>0; j--) c+=6*j;
 
        cout<<c<<endl;
        c=0;
    }
}