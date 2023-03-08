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
 
// https://codeforces.com/contest/1791/problem/B
 
int main()
{
    int t;
    cin>>t;
 
    while(t--){
        int s_len,n,x=0,y=0;
        string s;
        bool b=false;
 
        cin>>s_len>>s;
 
        forn(i,s_len){
            if(s[i]=='U') x++;
            if(s[i]=='D') x--;
            if(s[i]=='L') y--;
            if(s[i]=='R') y++;
 
            if(x==1 && y==1){
                b=true;
                break;
            }
        }
 
        if(b) cout<<"YES\n";
        else cout<<"NO\n";
    }
}