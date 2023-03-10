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
 
// https://codeforces.com/problemset/problem/1360/B
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        vi v(n);
        forn(i,n) cin>>v[i];
 
        sort(v.begin(),v.end());
 
        int min_dif = 999;
 
        for(int i=1; i<v.size(); i++){
            min_dif = min(v[i]-v[i-1], min_dif);
        }
 
        cout<<min_dif<<endl;
    }
}