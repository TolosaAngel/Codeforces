#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    int t;
    string s;
    bool flag=true;
 
    cin>>t;
 
    while(t--){
        cin>>s;
 
        if(s.size()==1 && s[0]!='Y' && s[0]!='e' && s[0]!='s' ){
            flag=false;
        }else{
            for(int i=0; i<s.size()-1; i++){
                if( s[i]!='Y' && s[i]!='e' && s[i]!='s' ){
                    flag=false;
                    break;
                }else if( (s[i]=='Y' && s[i+1]!='e') || (s[i]=='e' && s[i+1]!='s') || (s[i]=='s' && s[i+1]!='Y')){
                    flag=false;
                    break;
                }
            }
        }
 
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
 
        flag=true;
    }
}