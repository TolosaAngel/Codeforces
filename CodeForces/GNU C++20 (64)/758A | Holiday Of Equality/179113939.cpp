#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,c=0;
 
    cin>>n;
 
    vector<int> v(n);
 
    for(int i=0; i<n; i++) cin>>v[i];
 
    if(v.size()==1){
        cout<<0;
    }else{
        sort(v.begin(),v.end());
 
        for(int i=0; i<n; i++) c+=v[n-1]-v[i];
 
        cout<<c;
    }
}