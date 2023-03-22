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
 
// https://codeforces.com/contest/1692/problem/B
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n, c=0;
        cin>>n;
 
        set<int> s;
 
        forn(i,n){
            int x;
            cin>>x;
 
            if(s.find(x)!=s.end()) c++;
            else s.insert(x);
        }
 
        if(c%2==0) cout<<s.size()<<endl;
        else cout<<s.size()-1<<endl;
    }
}