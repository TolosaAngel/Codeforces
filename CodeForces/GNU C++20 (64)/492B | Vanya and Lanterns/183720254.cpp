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
 
// https://codeforces.com/problemset/problem/492/B
 
int main(){
    int medio=0, ans, n, l;
 
    cin>>n>>l;
 
    vi v(n);
 
    forsn(i,0,n) cin>>v[i];
 
    sort(v.begin(),v.end());
 
    forsn(i,0,v.size()-1) medio = max(v[i+1]-v[i], medio);
 
    ans = max((medio/2),max(v[0],l-v[v.size()-1]));
 
    if((double(medio)/2)>ans) cout<<fixed<<setprecision(10)<<double(medio)/2;
    else cout<<fixed<<setprecision(10)<<double(ans);
}