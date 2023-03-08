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
 
// https://codeforces.com/problemset/problem/579/A
 
string toBinary(intl n){
    string s;
 
    while(n){
        if(n&1) s+="1";
        else s+="0";
 
        n>>=1;
    }
 
    return s;
}
 
int main(){
    intl x, c = 0;
 
    cin>>x;
 
    string s = toBinary(x);
 
    forn(i,s.size()){
        if(s[i]=='1') c++;
    }
 
    cout<<c;
}