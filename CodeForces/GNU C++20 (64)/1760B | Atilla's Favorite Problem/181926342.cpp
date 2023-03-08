#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    int t,n,x,maxi;
    string s;
 
    cin>>t;
 
    while(t--){
        cin>>n;
        cin>>s;
 
        for(int i=0;  i<s.size(); i++){
            if(s[i]=='a') x=1;
            if(s[i]=='b') x=2;
            if(s[i]=='c') x=3;
            if(s[i]=='d') x=4;
            if(s[i]=='e') x=5;
            if(s[i]=='f') x=6;
            if(s[i]=='g') x=7;
            if(s[i]=='h') x=8;
            if(s[i]=='i') x=9;
            if(s[i]=='j') x=10;
            if(s[i]=='k') x=11;
            if(s[i]=='l') x=12;
            if(s[i]=='m') x=13;
            if(s[i]=='n') x=14;
            if(s[i]=='o') x=15;
            if(s[i]=='p') x=16;
            if(s[i]=='q') x=17;
            if(s[i]=='r') x=18;
            if(s[i]=='s') x=19;
            if(s[i]=='t') x=20;
            if(s[i]=='u') x=21;
            if(s[i]=='v') x=22;
            if(s[i]=='w') x=23;
            if(s[i]=='x') x=24;
            if(s[i]=='y') x=25;
            if(s[i]=='z') x=26;
 
            if(i==0) maxi=x;
            else if(x>maxi) maxi=x;
        }
 
        cout<<maxi<<endl;
    }
}