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
 
// https://codeforces.com/contest/1807/problem/C
 
int main(){
    int t,n,c;
    string s;
    cin>>t;
 
    while(t--){
        c = 1;
        cin>>n>>s;
 
        forn(i,n){
            char letter = s[i];
 
            forn(i,n){
                if(s[i]==letter){
                    s[i]=c;
                }
            }
 
            if(c==1) c=0;
            else c=1;
        }
 
        bool ans = true;
 
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                ans = false;
                break;
            }
        }
 
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}