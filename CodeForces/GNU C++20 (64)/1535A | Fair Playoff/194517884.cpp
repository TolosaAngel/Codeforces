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
 
// https://codeforces.com/problemset/problem/1535/A
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int f1,f2,s1,s2;
        vi v(4);
 
        forn(i,4) cin>>v[i];
 
        f1 = max(v[0],v[1]);
        s1 = max(v[2],v[3]);
 
        sort(v.begin(),v.end());
 
        f2 = v[2];
        s2 = v[3];
 
        if( (f1==f2 || f1==s2) && (s1==s2 || s1==f2) ) cout<<"YES\n";
        else cout<<"NO\n";
    }
}