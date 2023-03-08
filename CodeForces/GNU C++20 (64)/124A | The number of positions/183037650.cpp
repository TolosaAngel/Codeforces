#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,a,b;
 
    cin>>n>>a>>b;
 
    cout<<1+n-max(a+1,n-b);
}