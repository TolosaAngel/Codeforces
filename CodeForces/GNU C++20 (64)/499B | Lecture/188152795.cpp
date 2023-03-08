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
 
// https://codeforces.com/problemset/problem/499/B
 
int main(){
    int n,m;
 
    cin>>n>>m;
 
    vector<string> a(m), b(m);
 
    forn(i,m) cin>>a[i]>>b[i];
 
    while(n--){
        int pos;
        string aux;
 
        cin>>aux;
 
        forn(i,m) if(a[i]==aux) pos=i;
 
        if (b[pos].size() >= aux.size()) cout<<aux<<endl;
        else cout<<b[pos]<<endl;
    }
}