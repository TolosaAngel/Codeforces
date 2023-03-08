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
 
// https://codeforces.com/problemset/problem/75/A
 
int removeZeros(int n){
    string s = to_string(n), ts;
 
    forn(i,s.size()){
        if(s[i]!='0') ts+=s[i];
    }
 
    int r = stoi(ts);
 
    return r;
}
 
int main(){
    int a,b,c;
 
    cin>>a>>b;
    c = a+b;
 
    int a2 = removeZeros(a), b2 = removeZeros(b), c2 = removeZeros(c);
 
    if(a2+b2 == c2) cout<<"YES";
    else cout<<"NO";
}