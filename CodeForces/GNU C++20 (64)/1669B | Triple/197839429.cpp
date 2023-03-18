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
 
// https://codeforces.com/problemset/problem/1669/B
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,c=1,ans=-1;
        cin>>n;
 
        vi v(n);
 
        forn(i,n) cin>>v[i];
 
        sort(v.begin(),v.end());
 
        for(int i=1; i<n; i++){
            if(v[i-1]==v[i]) c++;
            else c=1;
 
            if(c==3){
                ans = v[i];
                break;
            }
        }
 
        cout<<ans<<endl;
    }
}