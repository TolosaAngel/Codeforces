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
 
// https://codeforces.com/problemset/problem/1676/A
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        string s;
        cin>>s;
 
        int a = s[0]-'0' + s[1]-'0' + s[2]-'0';
        int b = s[3]-'0' + s[4]-'0' + s[5]-'0';
 
        if(a==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
}