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
 
// https://codeforces.com/problemset/problem/978/B
 
int main(){
    int n,c=0,cx=0;
    string s;
 
    cin>>n>>s;
 
    forn(i,n){
        if(s[i]=='x') cx++;
        else cx=0;
 
        if(cx==3) c+=1, cx-=1;
    }
 
    cout<<c;
}