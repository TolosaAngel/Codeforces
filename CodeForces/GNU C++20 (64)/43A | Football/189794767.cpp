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
 
// https://codeforces.com/problemset/problem/43/A
 
int main(){
    int n, gt1 = 0, gt2 = 0;
    string aux, t1, t2;
 
    cin>>n;
 
    cin>>t1;
    gt1++;
    n--;
 
    while(n--){
        cin>>aux;
 
        if(aux==t1) gt1++;
        else{
            t2 = aux;
            gt2++;
        }
    }
 
    gt1>gt2 ? cout<<t1 : cout<<t2;
}