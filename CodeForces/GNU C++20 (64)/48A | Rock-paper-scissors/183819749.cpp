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
 
// https://codeforces.com/problemset/problem/48/A
 
int main(){
    string f,m,s;
 
    cin>>f;
    cin>>m;
    cin>>s;
 
    if( (f=="rock" && m=="scissors" && s=="scissors") || (f=="paper" && m=="rock" && s=="rock") || (f=="scissors" && m=="paper" && s=="paper") ){
        cout<<"F";
        return 0;
    }
 
    if( (m=="rock" && f=="scissors" && s=="scissors") || (m=="paper" && f=="rock" && s=="rock") || (m=="scissors" && f=="paper" && s=="paper") ){
        cout<<"M";
        return 0;
    }
 
    if( (s=="rock" && m=="scissors" && f=="scissors") || (s=="paper" && m=="rock" && f=="rock") || (s=="scissors" && m=="paper" && f=="paper") ){
        cout<<"S";
        return 0;
    }
 
    cout<<"?";
    return 0;
}