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
 
// https://codeforces.com/contest/339/problem/A
 
int main(){
    int o=0, tw=0, th=0;
    string s, r="";
 
    cin>>s;
 
    forn(i,s.size()){
        if(s[i]=='1') o++;
        else if(s[i]=='2') tw++;
        else if(s[i]=='3') th++;
    }
 
    while(o--) r+= "1+";
    while(tw--) r+= "2+";
    while(th--) r+= "3+";
 
    r.pop_back();
    cout<<r;
}