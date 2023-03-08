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
 
// https://codeforces.com/problemset/problem/96/A
 
int main(){
    int c1=0, c2=0;
    string s;
 
    cin>>s;
 
    forn(i,s.size()){
        if(s[i]=='0') c1++;
        else c1=0;
 
        if(s[i]=='1') c2++;
        else c2=0;
 
        if(c1 >= 7 || c2>= 7){
            cout<<"YES\n";
            break;
        }
    }
 
    if(c1 < 7 && c2 < 7) cout<<"NO\n";
}