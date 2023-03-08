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
 
// https://codeforces.com/problemset/problem/45/A
 
int main(){
    int k, x;
    string s;
 
    cin>>s;
    cin>>k;
 
    vector<string> M = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
 
    if(k>=12) k = k%12;
 
    forn(i,12){
        if(s==M[i]) x=i;
    }
 
    while(k--){
        x++;
        if(x==12) x=0;
    }
 
    cout<<M[x];
}