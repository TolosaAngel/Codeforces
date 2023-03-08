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
 
// https://codeforces.com/problemset/problem/131/A
 
int main(){
    int m=0;
    string s;
 
    cin>>s;
 
    for(int i=1; i<s.size(); i++){
        if(s[i]==toupper(s[i])) m++;
    }
 
    if(m==s.size()-1){
        forn(i,s.size()){
            if(s[i]==toupper(s[i])) s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
        }
    }
 
    cout<<s;
}