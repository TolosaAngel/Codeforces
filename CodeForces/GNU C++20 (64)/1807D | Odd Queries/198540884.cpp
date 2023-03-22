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
 
// https://codeforces.com/contest/1807/problem/D
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,q;
        cin>>n>>q;
 
        vi v(n);
        vll sum(n);
 
        forn(i,n){
            cin>>v[i];
 
            if(i==0) sum[i]=v[i];
            else sum[i]=v[i]+sum[i-1];
        }
 
        while(q--){
            int l,r,k,num=0;
            cin>>l>>r>>k;
 
            if(l>1) num+=sum[l-2];
 
            if(r<n) num+=sum[n-1]-sum[r-1];
            num += (r-l+1)*k;
 
            if(num%2==0) cout<<"\NO\n";
            else cout<<"YES\n";
        }
    }
}