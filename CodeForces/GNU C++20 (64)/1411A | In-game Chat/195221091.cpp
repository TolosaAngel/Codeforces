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
 
// https://codeforces.com/problemset/problem/1411/A
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n, c=0;
        string s;
 
        cin>>n>>s;
 
        reverse(s.begin(),s.end());
 
        forn(i,n){
            if(s[i]==')') c++;
            else{
                break;
            }
        }
 
        if(c==n || c>n-c) cout<<"YES\n";
        else cout<<"NO\n";
    }
}