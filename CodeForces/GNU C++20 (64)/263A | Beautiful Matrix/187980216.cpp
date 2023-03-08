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
 
// https://codeforces.com/problemset/problem/263/A
 
int main(){
    int m1[5][5] = {  {4,3,2,3,4},
                      {3,2,1,2,3},
                      {2,1,0,1,2},
                      {3,2,1,2,3},
                      {4,3,2,3,4},
                   };
 
    int r,m2[5][5];
 
    forn(i,5){
        forn(j,5){
            cin>>m2[i][j];
            if(m2[i][j] == 1) r=m1[i][j];
        }
    }
 
    cout<<r;
}