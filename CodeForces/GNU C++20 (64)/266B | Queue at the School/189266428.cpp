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
 
// https://codeforces.com/problemset/problem/266/B
 
int main(){
    int n,t;
    string s;
 
    cin>>n>>t>>s;
 
    while(t--){
        for(int i=1; i<n; i++){
            if(s[i-1]=='B' && s[i]=='G'){
                s[i-1]='G';
                s[i]='B';
 
                i++;
            }
        }
    }
 
    cout<<s;
}