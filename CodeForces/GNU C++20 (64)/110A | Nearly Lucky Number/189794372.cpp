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
 
// https://codeforces.com/problemset/problem/110/A
 
int main(){
    intl c = 0;
    string n;
 
    cin>>n;
 
    forn(i,n.size()){
        if(n[i]=='4' || n[i]=='7') c++;
 
        if(c>7){
            break;
        }
    }
 
    if(c==4 || c==7) cout<<"YES";
    else cout<<"NO";
}