#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int k,l,m,n,d,c=0;
 
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
 
    for(int i=1; i<=d; i++){
        if( !(i%k) || !(i%l) || !(i%m) || !(i%n) ) c++;
    }
 
    cout<<c;
}