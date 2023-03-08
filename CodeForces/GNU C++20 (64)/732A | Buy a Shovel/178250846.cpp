#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int r,k,s,c=1;
 
    cin>>k>>r;
    s=k;
 
    while(s%10!=0 && (s%10)!=r){
        s+=k;
        c++;
    }
 
    cout<<c;
}