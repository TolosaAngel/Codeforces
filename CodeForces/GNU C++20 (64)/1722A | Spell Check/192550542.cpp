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
 
// https://codeforces.com/problemset/problem/1722/A
 
int main(){
    int t,l;
 
    cin>>t;
 
    while(t--){
        vi v(5,0);
        string s;
 
        cin>>l>>s;
 
        forn(i,l){
            if(s[i]=='T') v[0]++;
            if(s[i]=='i') v[1]++;
            if(s[i]=='m') v[2]++;
            if(s[i]=='u') v[3]++;
            if(s[i]=='r') v[4]++;
        }
 
        if(v[0]==1 && v[1]==1 && v[2]==1 && v[3]==1 && v[4]==1 && l==5) cout<<"YES\n";
        else cout<<"NO\n";
    }
}