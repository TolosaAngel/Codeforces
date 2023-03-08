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
 
// https://codeforces.com/contest/1703/problem/C
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vi v(n);
        forn(i,n) cin>>v[i];
 
        forn(i,n){
            int x;
            string s;
 
            cin>>x>>s;
 
            forn(j,x){
                if(s[j]=='U'){
                    v[i]--;
                    if(v[i]==-1) v[i]=9;
                }
 
                if(s[j]=='D'){
                    v[i]++;
                    if(v[i]==10) v[i]=0;
                }
            }
        }
 
        forn(i,n) cout<<v[i]<<" ";
        cout<<endl;
    }
}