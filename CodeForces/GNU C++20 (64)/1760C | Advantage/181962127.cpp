#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    intl t,n;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        vector<intl> v(n);
        vector<intl> v2(n);
 
        for(intl i=0; i<n; i++){
            cin>>v[i];
        }
 
        for(intl i=0; i<n; i++){
            v2[i]=v[i];
        }
 
        sort(v2.begin(),v2.end());
 
        for(intl i=0; i<n; i++){
            if(v[i]==v2[n-1]) cout<<v2[n-1]-v2[n-2]<<" ";
            else cout<<v[i]-v2[n-1]<<" ";
        }
 
        cout<<endl;
    }
}