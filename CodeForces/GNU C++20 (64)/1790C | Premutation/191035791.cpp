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
 
// https://codeforces.com/problemset/problem/1790/C
 
int main(){
    int t;
 
    cin>>t;
 
    while(t--){
        int n, length;
        string ans;
 
        cin>>n;
 
        length = n-1;
        vi s1(n),s2(n),s3(n),aux(n);
 
        forn(i,length) cin>>s1[i];
        forn(i,length) cin>>s2[i];
        forn(i,length) cin>>s3[i];
 
        n-=3;
 
        if(s1[0]==s2[0]){
            ans += to_string(s1[0]);
            ans += " ";
            if(s3[0]!=s1[0]){
                forn(i,length) ans+= to_string(s3[i]) + " ";
            }
        }else if(s1[0]==s3[0]){
            ans += to_string(s1[0]);
            ans += " ";
            forn(i,length) ans+= to_string(s2[i]) + " ";
        }else if(s2[0]==s3[0]){
            ans += to_string(s2[0]);
            ans += " ";
            forn(i,length) ans+= to_string(s1[i]) + " ";
        }
 
        while(n--){
            forn(i,length) cin>>aux[i];
 
            if(s1[0]==s2[0] && s3[0]==s1[0] && aux[0]!=s1[0]){
                forn(i,length) ans+= to_string(aux[i]) + " ";
            }
        }
 
        cout<<ans<<endl;
    }
}