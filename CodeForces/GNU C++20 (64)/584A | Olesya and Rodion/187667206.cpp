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
 
// https://codeforces.com/problemset/problem/584/A
 
intl getPos(intl n, int base = 10){
    vll pos;
 
    if(n==0) pos.push_back(0);
 
    while(n>0){
        pos.push_back(n%base);
        n /= base;
    }
 
    return pos.size();
}
 
int main(){
    int n,t;
    cin>>n>>t;
 
    string s = to_string(t);
 
    if(t==10){
        if(n==1) cout<<-1;
        else{
            forn(i,n-getPos(t)) s += "0";
            cout<<s;
        }
    }else{
        forn(i,n-getPos(t)) s += to_string(t);
        cout<<s;
    }
}