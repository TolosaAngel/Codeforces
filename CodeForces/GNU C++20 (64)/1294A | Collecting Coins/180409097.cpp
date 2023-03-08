#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t,r,n;
    vector<int> v(3);
 
    cin>>t;
 
    while(t--){
        cin>>v[0]>>v[1]>>v[2]>>n;
 
        sort(v.begin(),v.end());
 
        r=n-( (v[2]-v[1])+(v[2]-v[0]) );
 
        if(r<0){
            cout<<"NO\n";
        }else if(r%3==0){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
}