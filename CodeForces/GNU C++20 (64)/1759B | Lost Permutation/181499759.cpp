#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    int t,m,s,x,y=1,y2=1;
    bool flag;
 
    cin>>t;
 
    while(t--){
        cin>>m>>s;
 
        vector<int> v(m);
 
        for(int i=0; i<m; i++) cin>>v[i];
 
        sort(v.begin(),v.end());
 
        for(int i=0; i<m; i++){
            flag=true;
 
            while(flag){
                if(v[i]!=y){
                    s-=y;
                    flag=true;
                }else{
                    flag=false;
                }
 
                y++;
            }
 
        }
 
        while(s>0){
            s-=v[m-1]+y2;
            y2++;
        }
 
 
        if(s==0) cout<<"YES\n";
        else cout<<"NO\n";
 
        y=1;
        y2=1;
    }
}