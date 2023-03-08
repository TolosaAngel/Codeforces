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
 
// https://codeforces.com/contest/1779/problem/A
 
int main(){
    int t,n;
 
    cin>>t;
 
    while(t--){
        string s;
        bool f=true;
 
        cin>>n;
        cin>>s;
 
        forn(i,n-1){
            if(s[i]=='R' && s[i+1]=='L'){
                cout<<0<<endl;
                f=false;
                break;
            }else if(s[i]=='L' && s[i+1]=='R'){
                cout<<i+1<<endl;
                f=false;
                break;
            }
        }
 
        if(f) cout<<-1<<endl;
    }
}