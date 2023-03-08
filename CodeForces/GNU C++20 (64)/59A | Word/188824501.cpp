#include <bits/stdc++.h>
 
using namespace std;
 
#define forsn(i,s,n) for(int i = int(s); i<int(n); i++)
#define forn(i,n) forsn(i,0,n)
#define dforsn(i,s,n) for(int i = int(n-1); i>=int(s); i--)
#define dforn(i,n) dforsn(i,0,n)
#define DBG(x) cout<<#x<<" = "<<x<<endl;
#define ioFast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long intl;
typedef vector<int> vi;
typedef vector<intl> vll;
 
// https://codeforces.com/problemset/problem/59/A
 
int main(){
    string s;
 
    cin>>s;
 
    int l=0,u=0;
 
    forn(i,s.size()){
        if('A'<=s[i] && 'Z'<s[i]) l++;
        else u++;
    }
 
    if(u>l){
        forn(i,s.size()) cout<<char(toupper(s[i]));
    }else{
        forn(i,s.size()) cout<<char(tolower(s[i]));
    }
}