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
 
// https://codeforces.com/problemset/problem/230/A
 
int main(){
    int s,n;
 
    cin>>s>>n;
 
    vector<vector<int>> v;
    v.resize(n, vector<int>(2));
 
    forn(i,n) cin>>v[i][0]>>v[i][1];
 
    sort(v.begin(), v.end());
 
    forn(i,n){
        if(s>v[i][0]){
            s+=v[i][1];
        }else{
            cout<<"NO";
            break;
        }
    }
 
    if(s>v[n-1][0]) cout<<"YES";
}