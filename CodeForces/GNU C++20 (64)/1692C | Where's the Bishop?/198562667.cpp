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
 
// https://codeforces.com/contest/1692/problem/C
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        vi v(8), v2(8);
 
        forn(i,8){
            string s;
            cin>>s;
 
            forn(j,s.size()){
                if(s[j]=='#') v[i]++, v2[i]=j+1;
            }
        }
 
        for(int i=1; i<7; i++){
            if(v[i-1]==2 && v[i]==1 && v[i+1]==2){
                cout<<i+1<<" "<<v2[i]<<endl;
                break;
            }
        }
    }
}