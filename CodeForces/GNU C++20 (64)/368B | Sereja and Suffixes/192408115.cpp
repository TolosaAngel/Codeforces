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
 
// https://codeforces.com/problemset/problem/368/B
 
int main(){
    int n,m;
    cin>>n>>m;
 
    vi v(100005), v2(100005,0);
    vector<bool> v3(100005);
 
    forn(i,n) cin>>v[i+1];
 
    for(int i = n; i >= 1; i--){
        if (!v3[v[i]]) v2[i]++;
        v3[v[i]]=true;
    }
 
    for(int i = n; i >= 1; i--) v2[i]+=v2[i + 1];
 
    while(m--){
        int x;
        cin>>x;
 
        cout<<v2[x]<<endl;
    }
}