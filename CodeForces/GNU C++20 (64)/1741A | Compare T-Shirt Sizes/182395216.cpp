#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
int main(){
    intl t;
    string s1, s2;
 
    cin>>t;
 
    while(t--){
        cin>>s1>>s2;
 
        if(s1[0]=='M' && s2[0]!='M') s2[s2.size()-1]=='S' ? cout<<">\n" : cout<<"<\n";
        if(s2[0]=='M' && s1[0]!='M') s1[s1.size()-1]=='S' ? cout<<"<\n" : cout<<">\n";
        if(s1[s1.size()-1]=='L' && s2[s2.size()-1]=='S') cout<<">\n";
        if(s1[s1.size()-1]=='S' && s2[s2.size()-1]=='L') cout<<"<\n";
 
        if(s1[s1.size()-1]==s2[s2.size()-1]){
            if(s1.size()==s2.size()) cout<<"=\n";
 
            if(s1[s1.size()-1]=='S'){
                if(s1.size()>s2.size()) cout<<"<\n";
                if(s1.size()<s2.size()) cout<<">\n";
            }
 
            if(s1[s1.size()-1]=='L'){
                if(s1.size()>s2.size()) cout<<">\n";
                if(s1.size()<s2.size()) cout<<"<\n";
            }
        }
    }
}