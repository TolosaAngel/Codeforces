#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int k,n,w,d=0;
 
    cin>>k>>n>>w;
 
    for(int i=1; i<=w; i++) d+=i*k;
 
    d-n>0 ? cout<<d-n : cout<<0;
}