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
 
// https://codeforces.com/problemset/problem/271/A
 
int main(){
    int y;
 
    cin>>y;
 
    int y2 = y;
 
    while(true){
        y2++;
        string y3 = to_string(y2);
 
        if(y3[0]!=y3[1] && y3[0]!=y3[2] && y3[0]!=y3[3] && y3[1]!=y3[2] && y3[1]!=y3[3] && y3[2]!=y3[3]){
            break;
        }
    }
 
    cout<<y2;
}