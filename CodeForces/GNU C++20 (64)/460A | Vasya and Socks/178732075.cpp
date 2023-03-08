#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,m,d=0,i=1;
 
    cin>>n>>m;
 
    while(n!=0){
        n--;
 
        d++;
 
        if(m*i==d) n++,i++;
    }
 
    cout<<d;
}