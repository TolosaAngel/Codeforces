#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    float n,m;
 
    cin>>n>>m;
 
    for(int i=ceil(n/2); i<=n; i++){
        if(int(i)%int(m)==0){
            cout<<i;
            break;
        }
 
        if(i==n) cout<<-1;
    }
}