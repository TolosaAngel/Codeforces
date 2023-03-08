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
 
// https://codeforces.com/problemset/problem/25/A
 
int main(){
    int n;
 
    cin>>n;
 
    vi v(n);
 
    forn(i,n) cin>>v[i];
 
    if(v[0]%2==0 && v[1]%2==0){
        forn(i,n){
            if(v[i]%2!=0) cout<<i+1;
        }
    }
 
    if(v[0]%2!=0 && v[1]%2!=0){
        forn(i,n){
            if(v[i]%2==0) cout<<i+1;
        }
    }
 
    if(v[0]%2==0 && v[1]%2!=0){
        if(v[2]%2==0) cout<<2;
        else cout<<1;
    }
 
    if(v[0]%2!=0 && v[1]%2==0){
        if(v[2]%2==0) cout<<1;
        else cout<<2;
    }
}