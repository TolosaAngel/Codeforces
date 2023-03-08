#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a,b,c;
    vector<int> v(4);
 
    for(int i=0; i<4; i++) cin>>v[i];
 
    sort(v.begin(),v.end());
 
    c=(v[1]-v[0]+v[2])/2;
    a=v[1]-c;
    b=v[0]-a;
 
    cout<<a<<" "<<b<<" "<<c<<endl;
}