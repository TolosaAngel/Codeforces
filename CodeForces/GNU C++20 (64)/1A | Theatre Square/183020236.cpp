#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    double n,m,a;
 
    cin>>n>>m>>a;
 
    cout<<intl(ceil(n/a)*ceil(m/a));
}