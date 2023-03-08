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
 
// https://codeforces.com/problemset/problem/996/A
 
int main(){
    intl n, c=0;
 
    cin>>n;
 
    if(n>=100) c+=n/100, n%=100;
    if(n>=20) c+=n/20, n%=20;
    if(n>=10) c+=n/10, n%=10;
    if(n>=5) c+=n/5, n%=5;
    if(n>=1) c+=n, n%=1;
 
    cout<<c;
}