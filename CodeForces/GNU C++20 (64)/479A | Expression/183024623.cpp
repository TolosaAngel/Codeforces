#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    vector<int> v(6);
    int a,b,c;
 
    cin>>a>>b>>c;
 
    v[0] = a+b+c;
    v[1] = (a+b)*c;
    v[2] = (a*b)+c;
    v[3] = a*b*c;
    v[4] = a+(b*c);
    v[5] = a*(b+c);
 
    int maxi=v[0];
 
    for(int i=1; i<v.size(); i++){
        if(v[i]>maxi) maxi=v[i];
    }
 
    cout<<maxi;
}