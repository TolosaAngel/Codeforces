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
 
// https://codeforces.com/problemset/problem/158/B
 
int main(){
    int n, x, taxis=0;
    vi s(4,0);
 
    cin>>n;
 
    forn(i,n) cin>>x, s[x-1]++;
 
    taxis += s[3];
 
    while(s[2]>0){
        taxis ++;
        s[2]--;
 
        if(s[0]>0) s[0]--;
    }
 
    while(s[1]>=2){
        taxis++;
        s[1]-=2;
    }
 
    while(s[1]>0){
        taxis++;
        s[1]--;
 
        if(s[0]>0){
            s[0]--;
 
            if(s[0]>0) s[0]--;
        }
    }
 
    while(s[0]>0){
        taxis++;
        s[0]-=4;
    }
 
    cout<<taxis<<endl;
}