#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    intl n,x,y,z,cx=0,cy=0,cz=0;
 
    cin>>n;
 
    while(n--){
        cin>>x>>y>>z;
 
        cx+=x;
        cy+=y;
        cz+=z;
    }
 
    if(cx==0 && cy==0 && cz==0) cout<<"YES";
    else cout<<"NO";
}