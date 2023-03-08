#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    double t=0;
 
    cin>>n;
    vector<int> p(n);
 
    for(int i=0; i<n; i++){
        cin>>p[i];
        t+=p[i];
    }
 
    cout<<fixed<<setprecision(12)<<t/n;
}